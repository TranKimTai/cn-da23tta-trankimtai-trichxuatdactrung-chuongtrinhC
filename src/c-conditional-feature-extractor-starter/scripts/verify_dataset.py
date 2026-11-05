from __future__ import annotations

import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


EXPECTED_TOTAL = 1200
EXPECTED_PROBLEMS = 12
EXPECTED_ACCEPTED = 600
EXPECTED_WRONG_ANSWER = 600
EXPECTED_PER_PROBLEM = 100
EXPECTED_STATUS_PER_PROBLEM = 50


def fail(message: str) -> None:
    print(f"[FAIL] {message}")


def ok(message: str) -> None:
    print(f"[ OK ] {message}")


def main() -> int:
    repo_root = Path(__file__).resolve().parents[1]
    dataset_dir = repo_root / "dataset"
    metadata_dir = dataset_dir / "metadata"

    submissions_file = metadata_dir / "submissions.csv"
    problems_file = metadata_dir / "problems.csv"

    errors = 0

    print("=== CodeNet-C-Branching Student v1.0 Verification ===")
    print(f"Repository: {repo_root}")
    print()

    # 1. Required files
    for path in [submissions_file, problems_file]:
        if path.exists():
            ok(f"Found {path.relative_to(repo_root)}")
        else:
            fail(f"Missing {path.relative_to(repo_root)}")
            errors += 1

    if errors:
        print()
        print(f"Verification stopped: {errors} required file(s) missing.")
        return 1

    # 2. Read problems
    with problems_file.open("r", encoding="utf-8-sig", newline="") as f:
        problems = list(csv.DictReader(f))

    problem_ids = [row["problem_id"].strip() for row in problems]
    unique_problem_ids = set(problem_ids)

    if len(problems) == EXPECTED_PROBLEMS and len(unique_problem_ids) == EXPECTED_PROBLEMS:
        ok(f"Problems: {EXPECTED_PROBLEMS}")
    else:
        fail(
            f"Problems: expected {EXPECTED_PROBLEMS}, "
            f"found {len(problems)} rows / {len(unique_problem_ids)} unique IDs"
        )
        errors += 1

    # 3. Read submissions
    with submissions_file.open("r", encoding="utf-8-sig", newline="") as f:
        submissions = list(csv.DictReader(f))

    if len(submissions) == EXPECTED_TOTAL:
        ok(f"Submissions: {EXPECTED_TOTAL}")
    else:
        fail(f"Submissions: expected {EXPECTED_TOTAL}, found {len(submissions)}")
        errors += 1

    # 4. Unique submission IDs
    submission_ids = [row["submission_id"].strip() for row in submissions]
    if len(set(submission_ids)) == len(submission_ids):
        ok("submission_id values are unique")
    else:
        duplicates = [sid for sid, count in Counter(submission_ids).items() if count > 1]
        fail(f"Duplicate submission_id values: {duplicates[:10]}")
        errors += 1

    # 5. Status distribution
    statuses = Counter(row["status"].strip() for row in submissions)

    if statuses.get("Accepted", 0) == EXPECTED_ACCEPTED:
        ok(f"Accepted: {EXPECTED_ACCEPTED}")
    else:
        fail(
            f"Accepted: expected {EXPECTED_ACCEPTED}, "
            f"found {statuses.get('Accepted', 0)}"
        )
        errors += 1

    if statuses.get("Wrong Answer", 0) == EXPECTED_WRONG_ANSWER:
        ok(f"Wrong Answer: {EXPECTED_WRONG_ANSWER}")
    else:
        fail(
            f"Wrong Answer: expected {EXPECTED_WRONG_ANSWER}, "
            f"found {statuses.get('Wrong Answer', 0)}"
        )
        errors += 1

    unexpected_statuses = set(statuses) - {"Accepted", "Wrong Answer"}
    if unexpected_statuses:
        fail(f"Unexpected status values: {sorted(unexpected_statuses)}")
        errors += 1
    else:
        ok("No unexpected status values")

    # 6. Per-problem balance
    per_problem = defaultdict(Counter)
    for row in submissions:
        pid = row["problem_id"].strip()
        status = row["status"].strip()
        per_problem[pid][status] += 1

    bad_problem_counts = []
    for pid in sorted(unique_problem_ids):
        counts = per_problem[pid]
        total = sum(counts.values())
        if (
            total != EXPECTED_PER_PROBLEM
            or counts.get("Accepted", 0) != EXPECTED_STATUS_PER_PROBLEM
            or counts.get("Wrong Answer", 0) != EXPECTED_STATUS_PER_PROBLEM
        ):
            bad_problem_counts.append(
                (
                    pid,
                    total,
                    counts.get("Accepted", 0),
                    counts.get("Wrong Answer", 0),
                )
            )

    if not bad_problem_counts:
        ok("Each problem has 100 submissions: 50 Accepted + 50 Wrong Answer")
    else:
        fail("Per-problem distribution mismatch:")
        for pid, total, ac, wa in bad_problem_counts:
            print(f"       {pid}: total={total}, Accepted={ac}, Wrong Answer={wa}")
        errors += 1

    # 7. problem_id consistency
    submission_problem_ids = {row["problem_id"].strip() for row in submissions}
    unknown_problem_ids = submission_problem_ids - unique_problem_ids
    missing_problem_ids = unique_problem_ids - submission_problem_ids

    if not unknown_problem_ids and not missing_problem_ids:
        ok("problem_id values are consistent between problems.csv and submissions.csv")
    else:
        if unknown_problem_ids:
            fail(f"Unknown problem_id values in submissions.csv: {sorted(unknown_problem_ids)}")
            errors += 1
        if missing_problem_ids:
            fail(f"Problems without submissions: {sorted(missing_problem_ids)}")
            errors += 1

    # 8. Source file existence
    missing_sources = []
    for row in submissions:
        source_path = row["source_path"].strip().replace("/", str(Path("/")))
        # source_path is relative to dataset/, e.g. source/p02392/s217341346.c
        source_file = dataset_dir / Path(row["source_path"].strip())
        if not source_file.is_file():
            missing_sources.append(row["source_path"].strip())

    if not missing_sources:
        ok("All source files referenced by submissions.csv exist")
    else:
        fail(f"Missing source files: {len(missing_sources)}")
        for source in missing_sources[:10]:
            print(f"       {source}")
        errors += 1

    # 9. Count actual .c files
    actual_c_files = list((dataset_dir / "source").rglob("*.c"))
    if len(actual_c_files) == EXPECTED_TOTAL:
        ok(f"C source files on disk: {EXPECTED_TOTAL}")
    else:
        fail(f"C source files on disk: expected {EXPECTED_TOTAL}, found {len(actual_c_files)}")
        errors += 1

    # 10. Description files
    missing_descriptions = []
    for row in problems:
        rel = row["description_path"].strip()
        if rel and not (dataset_dir / rel).is_file():
            missing_descriptions.append(rel)

    if not missing_descriptions:
        ok("All problem descriptions referenced by problems.csv exist")
    else:
        fail(f"Missing description files: {len(missing_descriptions)}")
        for rel in missing_descriptions[:10]:
            print(f"       {rel}")
        errors += 1

    print()
    if errors == 0:
        print("RESULT: PASS")
        print("Dataset matches the expected CodeNet-C-Branching Student v1.0 structure.")
        return 0

    print(f"RESULT: FAIL ({errors} issue(s))")
    return 1


if __name__ == "__main__":
    sys.exit(main())
