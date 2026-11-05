import json
import pandas as pd
from pathlib import Path

def export_results(features_list, conditions_list, output_dir="output"):
    """
    Xuất danh sách kết quả ra 2 file chuẩn: features.csv và conditions.jsonl.
    """
    out_dir = Path(output_dir)
    out_dir.mkdir(parents=True, exist_ok=True)

    # 1. Xuất features.csv
    if features_list:
        df = pd.DataFrame(features_list)
        csv_path = out_dir / "features.csv"
        df.to_csv(csv_path, index=False)
        print(f"Đã xuất {len(features_list)} bản ghi ra {csv_path}")

    # 2. Xuất conditions.jsonl
    if conditions_list:
        jsonl_path = out_dir / "conditions.jsonl"
        with open(jsonl_path, "w", encoding="utf-8") as f:
            for condition in conditions_list:
                f.write(json.dumps(condition, ensure_ascii=False) + "\n")
        print(f"Đã xuất {len(conditions_list)} biểu thức điều kiện ra {jsonl_path}")
