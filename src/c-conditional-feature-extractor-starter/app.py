import json
from pathlib import Path
import pandas as pd
import streamlit as st
import streamlit.components.v1 as components

# --- IMPORT TỪ MÔ-ĐUN BÊN TRONG THƯ MỤC src/ ---
from src.parser import parse_source_code
from src.models import FEATURE_GROUPS, FEATURE_DESCRIPTIONS
from src.extractor import extract_features_and_conditions
from src.utils import collect_ast_branches, generate_mermaid_ast
from src.samples import BUILTIN_SAMPLES

st.set_page_config(
    page_title="Hệ Thống Phân Tích AST & Trích Xuất Đặc Trưng C",
    page_icon="🌳",
    layout="wide",
    initial_sidebar_state="expanded",
)

# ================= KHU VỰC 1: CSS GIAO DIỆN CHUẨN =================
st.markdown(
    """
    <style>
        header[data-testid="stHeader"] { background: transparent !important; height: 1.8rem !important; }
        [data-testid="stAppDeployButton"], .stDeployButton { display: none !important; }
        .block-container { padding-top: 0.8rem !important; padding-bottom: 0.4rem !important; max-width: 98% !important; font-family: Arial, Helvetica, sans-serif !important; }
        .top-banner { background: linear-gradient(135deg, #0f172a 0%, #1e3a8a 100%); color: #ffffff; padding: 12px 20px; border-radius: 10px; margin-bottom: 18px; display: flex; justify-content: space-between; align-items: center; box-shadow: 0 2px 8px rgba(15, 23, 42, 0.1); }
        .top-banner-title { font-size: 1.18rem; font-weight: 700; margin: 0; }
        .top-banner-sub { font-size: 0.84rem; color: #cbd5e1; margin: 2px 0 0 0; }
        .file-pill { background: rgba(255, 255, 255, 0.14); border: 1px solid rgba(255, 255, 255, 0.28); color: #f8fafc; padding: 6px 14px; border-radius: 999px; font-size: 0.85rem; font-weight: 600; white-space: nowrap; }
        div[data-testid="stSidebarHeader"] { height: 1.5rem !important; min-height: 1.5rem !important; padding: 0.2rem 0.5rem 0 0.5rem !important; }
        div[data-testid="stSidebarUserContent"] { padding-top: 0.4rem !important; }
        [data-testid="stFileUploader"] section { padding: 1rem !important; }
        [data-testid="stFileUploader"] section div[data-testid="stMarkdownContainer"] p { font-size: 0.95rem !important; }
        section[data-testid="stSidebar"] { background-color: #f8fafc !important; border-right: 2px solid #e2e8f0 !important; }
        .menu-group-label { font-size: 0.76rem; font-weight: 700; text-transform: uppercase; letter-spacing: 0.8px; color: #64748b; margin: 12px 0 6px 0; }
        section[data-testid="stSidebar"] div.stButton > button { width: 100% !important; display: flex !important; justify-content: flex-start !important; align-items: center !important; text-align: left !important; padding: 10px 14px !important; border-radius: 8px !important; font-weight: 600 !important; font-size: 0.92rem !important; margin-bottom: 4px !important; }
        section[data-testid="stSidebar"] div.stButton > button > div, section[data-testid="stSidebar"] div.stButton > button div[data-testid="stMarkdownContainer"] { width: 100% !important; display: flex !important; justify-content: flex-start !important; text-align: left !important; margin: 0 !important; }
        section[data-testid="stSidebar"] div.stButton > button p { text-align: left !important; width: 100% !important; margin: 0 !important; }
        .page-card { background: #ffffff; border: 1px solid #e2e8f0; border-left: 4px solid #2563eb; padding: 10px 16px; border-radius: 8px; margin-bottom: 12px; }
        .page-card h3 { margin: 0; color: #0f172a; font-size: 1.08rem; }
        .page-card p { margin: 3px 0 0 0; color: #475569; font-size: 0.86rem; }
        .summary-card { background: #f8fafc; border: 1px solid #e2e8f0; border-top: 3px solid #2563eb; border-radius: 10px; padding: 10px 14px; text-align: center; margin-bottom: 12px; }
        .summary-card .num { font-size: 1.5rem; font-weight: 800; color: #1e3a8a; line-height: 1.2; }
        .summary-card .lbl { font-size: 0.82rem; color: #475569; font-weight: 600; margin-top: 4px; }
        .block-container p, .block-container label, .block-container [data-testid="stMarkdownContainer"], .block-container [data-testid="stCaptionContainer"] { font-size: 0.92rem; line-height: 1.5; }
        div[data-testid="stTabs"] { margin-top: 0 !important; margin-bottom: 0.25rem !important; }
        div[data-testid="stTabs"] [data-baseweb="tab-list"] { gap: 0.35rem !important; }
        .ast-legend-compact { display: flex; align-items: center; justify-content: space-between; gap: 12px; flex-wrap: wrap; padding: 6px 12px; background: #f8fafc; border: 1px solid #cbd5e1; border-radius: 6px; margin-bottom: 8px; font-size: 0.82rem; color: #334155; }
        .legend-dot { width: 11px; height: 11px; border-radius: 3px; display: inline-block; margin-right: 4px; vertical-align: middle; }
    </style>
    """,
    unsafe_allow_html=True,
)


# ================= DANH SÁCH 5 MỤC MENU CHỨC NĂNG =================
MENU_ITEMS = [
    "1. 📂 Chọn & Xem Mã Nguồn C",
    "2. 🌳 Xem Sơ Đồ Khối AST",
    "3. 📊 Thống Kê 22 Đặc Trưng",
    "4. 🔍 Chi Tiết Biểu Thức Điều Kiện",
    "5. 📥 Tải File Kết Quả (CSV / JSONL)",
]

if "input_mode" not in st.session_state:
    st.session_state.input_mode = "🧪 Chọn nhanh từ 6 bài Test mẫu chuẩn"
if "active_menu" not in st.session_state:
    st.session_state.active_menu = MENU_ITEMS[0]
if "source_code" not in st.session_state:
    st.session_state.source_code = ""
if "filename" not in st.session_state:
    st.session_state.filename = ""


def set_menu(menu_label):
    st.session_state.active_menu = menu_label


# ================= SIDEBAR BÊN TRÁI =================
with st.sidebar:
    st.markdown("### 🧭 MENU HỆ THỐNG")
    st.caption("Chọn từng bước thực hiện theo nhiệm vụ đề tài")

    st.markdown('<div class="menu-group-label">DANH MỤC CHỨC NĂNG</div>', unsafe_allow_html=True)

    for item in MENU_ITEMS:
        is_active = st.session_state.active_menu == item
        if st.button(item, key=f"nav_{item}", type="primary" if is_active else "secondary", use_container_width=True):
            st.session_state.active_menu = item
            st.rerun()

    st.divider()
    st.markdown('<div class="menu-group-label">TRẠNG THÁI MÃ NGUỒN</div>', unsafe_allow_html=True)
    if st.session_state.source_code.strip():
        line_cnt = len(st.session_state.source_code.splitlines())
        st.success(f"**Đã nạp tệp:** `{st.session_state.filename}` ({line_cnt} dòng)")
        if st.button("🗑️ Xóa / Đổi tệp", use_container_width=True):
            st.session_state.source_code = ""
            st.session_state.filename = ""
            st.session_state.active_menu = MENU_ITEMS[0]
            st.rerun()
    else:
        st.warning("Chưa nạp tệp `.c` nào.")


# ================= BANNER =================
file_status_text = f"📄 Tệp đang mở: {st.session_state.filename}" if st.session_state.source_code.strip() else "⏳ Trạng thái: Chưa nạp tệp .c"
st.markdown(
    f"""
    <div class="top-banner">
        <div>
            <p class="top-banner-title">🌳 HỆ THỐNG PHÂN TÍCH AST & TRÍCH XUẤT ĐẶC TRƯNG ĐIỀU KIỆN C</p>
            <p class="top-banner-sub">Công cụ phân tích tĩnh mã nguồn C bằng Tree-sitter — Trích xuất 22 đặc trưng</p>
        </div>
        <div class="file-pill">{file_status_text}</div>
    </div>
    """,
    unsafe_allow_html=True,
)


# ================= GIAO DIỆN CHÍNH =================
current_menu = st.session_state.active_menu

# --- MỤC 1: NẠP FILE ---
if current_menu == MENU_ITEMS[0]:
    tab_up, tab_sample, tab_edit = st.tabs([
        "📤 Upload tệp .c từ máy tính",
        "🧪 Chọn nhanh từ 6 bài Test mẫu chuẩn",
        "✍️ Tự nhập / Chỉnh sửa mã nguồn C",
    ])

    with tab_up:
        uploaded_file = st.file_uploader("Chọn tệp mã nguồn C (.c):", type=["c"], key="c_file_uploader")
        if uploaded_file is not None:
            st.session_state.source_code = uploaded_file.read().decode("utf-8", errors="replace")
            st.session_state.filename = uploaded_file.name

    with tab_sample:
        c_sel, c_btn = st.columns([3.2, 1], vertical_alignment="bottom")
        with c_sel:
            chosen_sample = st.selectbox("Chọn kịch bản kiểm thử:", options=list(BUILTIN_SAMPLES.keys()), label_visibility="collapsed")
        with c_btn:
            if st.button("📥 Nạp mã nguồn mẫu này", type="primary", use_container_width=True):
                st.session_state.source_code = BUILTIN_SAMPLES[chosen_sample]
                st.session_state.filename = chosen_sample.split(" - ")[0].replace(" ", "_").lower() + ".c"
                st.rerun()

    with tab_edit:
        default_editor = st.session_state.source_code if st.session_state.source_code else BUILTIN_SAMPLES["Test 01 - Chuỗi bậc thang else-if (R01, R02, R03)"]
        edited_code = st.text_area("Nhập hoặc dán đoạn chương trình C vào đây:", value=default_editor, height=220)
        if st.button("📥 Nạp đoạn code C này", type="primary"):
            st.session_state.source_code = edited_code
            st.session_state.filename = "custom_code.c"
            st.rerun()

    if st.session_state.source_code.strip():
        src_bytes = st.session_state.source_code.encode("utf-8")
        tree = parse_source_code(src_bytes)
        has_err = tree.root_node.has_error

        st.markdown(
            f"""
            <div style="display: flex; justify-content: space-between; align-items: center; background: #f8fafc; border: 1px solid #e2e8f0; padding: 8px 14px; border-radius: 8px; margin-top: 8px; margin-bottom: 8px;">
                <span style="font-weight: 700; color: #1e3a8a; font-size: 0.98rem;">📄 Tệp đang phân tích: <code>{st.session_state.filename}</code></span>
                <span style="font-weight: 600; color: {'#dc2626' if has_err else '#166534'}; font-size: 0.92rem;">{'⚠️ Có lỗi cú pháp C' if has_err else '✅ Cú pháp C hợp lệ'}</span>
            </div>
            """,
            unsafe_allow_html=True,
        )

        st.code(st.session_state.source_code, language="c", line_numbers=True)
    else:
        st.info("👆 Hãy chọn một tệp `.c` ở khung Upload phía trên.")

# --- CÁC MỤC KHÁC ---
else:
    if not st.session_state.source_code.strip():
        st.warning("⚠️ Bạn chưa nạp tệp mã nguồn C nào. Vui lòng thực hiện **1. 📂 Chọn & Xem Mã Nguồn C** trước!")
        st.stop()

    source_bytes = st.session_state.source_code.encode("utf-8")
    tree = parse_source_code(source_bytes)
    root = tree.root_node
    features, condition_records = extract_features_and_conditions(root, source_bytes)

    if current_menu == MENU_ITEMS[1]:
        branch_items = collect_ast_branches(root, source_bytes)
        branch_map = {item["label"]: item["node"] for item in branch_items}
        all_labels = list(branch_map.keys())

        ctrl_col1, ctrl_col2, ctrl_col3 = st.columns([2.8, 1.1, 1.1], vertical_alignment="bottom")
        with ctrl_col1:
            selected_branch_labels = st.multiselect("🔍 Chọn nhánh AST muốn xem:", options=all_labels, default=[all_labels[0]])
        with ctrl_col2:
            with st.popover("⚙️ Tùy chỉnh hiển thị sơ đồ", use_container_width=True):
                show_fields_opt = st.checkbox("Hiển thị nhãn Trường (field)", value=True)
                highlight_nodes_opt = st.checkbox("Tô màu phân biệt", value=True)
                hide_comments_opt = st.checkbox("Ẩn Node chú thích", value=True)
        with ctrl_col3:
            with st.popover(f"📄 Xem nhanh code `{st.session_state.filename}`", use_container_width=True):
                st.code(st.session_state.source_code, language="c", line_numbers=True)

        st.markdown(
            """
            <div class="ast-legend-compact">
                <div><span style="margin-right:14px;"><span class="legend-dot" style="background:#fef3c7;border:1.5px solid #d97706;"></span><b>Cam:</b> Nhánh điều kiện</span><span style="margin-right:14px;"><span class="legend-dot" style="background:#dbeafe;border:1.5px solid #2563eb;"></span><b>Xanh dương:</b> Toán tử</span><span><span class="legend-dot" style="background:#dcfce7;border:1.5px solid #16a34a;"></span><b>Xanh lá:</b> Nút lá</span></div>
                <div>🖱️ <i>Lăn chuột: Phóng to/Thu nhỏ | Giữ chuột trái: Kéo sơ đồ</i></div>
            </div>
            """,
            unsafe_allow_html=True,
        )

        if selected_branch_labels:
            nodes_to_render = [root] if all_labels[0] in selected_branch_labels else [branch_map[lbl] for lbl in selected_branch_labels]
            mermaid_code = generate_mermaid_ast(nodes_to_render, source_bytes, show_fields=show_fields_opt, highlight_nodes=highlight_nodes_opt, hide_comments=hide_comments_opt)
            html_code = f"""
            <!DOCTYPE html><html><head><script type="module">
            import mermaid from 'https://cdn.jsdelivr.net/npm/mermaid@10/dist/mermaid.esm.min.mjs';
            mermaid.initialize({{startOnLoad: true, securityLevel: 'loose', maxTextSize: 500000, flowchart: {{ curve: 'basis', nodeSpacing: 42, rankSpacing: 55, wrappingWidth: 900 }}}});
            </script><script src="https://cdn.jsdelivr.net/npm/svg-pan-zoom@3.6.1/dist/svg-pan-zoom.min.js"></script>
            <style>body {{ margin: 0; padding: 0; overflow: hidden; background: #ffffff; border: 2px solid #cbd5e1; border-radius: 10px; }} .mermaid {{ height: 780px; width: 100%; display: flex; justify-content: center; align-items: center; }} svg {{ width: 100% !important; height: 100% !important; }}</style>
            </head><body><div class="mermaid" id="graphDiv">{mermaid_code}</div>
            <script>setTimeout(() => {{ var svg = document.querySelector('.mermaid svg'); if (svg) {{ svgPanZoom(svg, {{ zoomEnabled: true, controlIconsEnabled: true, fit: true, center: true, minZoom: 0.05, maxZoom: 15 }}); }} }}, 1200);</script>
            </body></html>
            """
            components.html(html_code, height=795, scrolling=False)
        else:
            st.warning("👆 Vui lòng chọn nhánh AST.")

    elif current_menu == MENU_ITEMS[2]:
        with st.expander(f"📄 Đối chiếu nhanh mã nguồn gốc: `{st.session_state.filename}`", expanded=False):
            st.code(st.session_state.source_code, language="c", line_numbers=True)

        st.markdown(
            f"""<div class="page-card"><h3>📊 Mục 3: Thống Kê 22 Đặc Trưng Cấu Trúc Điều Kiện — <code>{st.session_state.filename}</code></h3>
            <p>Bảng thống kê chi tiết toàn bộ 22 đặc trưng chia theo 5 nhóm.</p></div>""", unsafe_allow_html=True,
        )

        total_cmp = sum(features[k] for k in ["lt_count", "le_count", "gt_count", "ge_count", "eq_count", "ne_count"])
        total_log = sum(features[k] for k in ["and_count", "or_count", "not_count"])

        sc1, sc2, sc3, sc4, sc5 = st.columns(5)
        with sc1: st.markdown(f'<div class="summary-card"><div class="num">{features["if_count"]} / {features["max_nesting_depth"]}</div><div class="lbl">Số lệnh IF / Độ sâu lồng</div></div>', unsafe_allow_html=True)
        with sc2: st.markdown(f'<div class="summary-card"><div class="num">{total_cmp}</div><div class="lbl">Tổng Toán tử So sánh</div></div>', unsafe_allow_html=True)
        with sc3: st.markdown(f'<div class="summary-card"><div class="num">{total_log}</div><div class="lbl">Tổng Toán tử Logic</div></div>', unsafe_allow_html=True)
        with sc4: st.markdown(f'<div class="summary-card"><div class="num">{features["condition_count"]} ({features["simple_condition_count"]}Đ / {features["compound_condition_count"]}G)</div><div class="lbl">Tổng Biểu thức ĐK</div></div>', unsafe_allow_html=True)
        with sc5: st.markdown(f'<div class="summary-card"><div class="num">{features["constant_count"]} ({features["unique_constant_count"]})</div><div class="lbl">Hằng số (Phân biệt)</div></div>', unsafe_allow_html=True)

        for group_title, keys in FEATURE_GROUPS.items():
            st.markdown(f"#### 🔹 {group_title}")
            df_group = pd.DataFrame([{"STT": idx, "Tên đặc trưng (Feature Name)": k, "Giá trị đếm được": features[k], "Mô tả quy tắc tính": FEATURE_DESCRIPTIONS.get(k, "")} for idx, k in enumerate(keys, 1)])
            st.dataframe(df_group, use_container_width=True, hide_index=True)

    elif current_menu == MENU_ITEMS[3]:
        with st.expander(f"📄 Đối chiếu nhanh mã nguồn gốc: `{st.session_state.filename}`", expanded=False):
            st.code(st.session_state.source_code, language="c", line_numbers=True)
        st.markdown(f"""<div class="page-card"><h3>🔍 Mục 4: Phân Tích Chi Tiết Từng Biểu Thức Điều Kiện — <code>{st.session_state.filename}</code></h3>
            <p>Danh sách từng biểu thức điều kiện cấp quyết định kèm vị trí dòng, độ sâu, toán tử và hằng số.</p></div>""", unsafe_allow_html=True)
        if condition_records:
            cond_df = pd.DataFrame([{ "STT": i, "Dòng (Line)": r["line"], "Loại (Type)": r["type"], "Độ sâu (Depth)": r["depth"], "Phân loại": "Ghép (Compound)" if r["is_compound"] else "Đơn (Simple)", "Biểu thức điều kiện (Expression)": r["expression"], "Toán tử so sánh": ", ".join(r["comparison_operators"]) or "—", "Toán tử logic": ", ".join(r["logical_operators"]) or "—", "Hằng số": ", ".join(r["constants"]) or "—"} for i, r in enumerate(condition_records, 1)])
            st.dataframe(cond_df, use_container_width=True, hide_index=True)
        else:
            st.info("Tệp mã nguồn C này không chứa biểu thức điều kiện boolean nào (`if`, `else-if`, `?:`).")

    elif current_menu == MENU_ITEMS[4]:
        with st.expander(f"📄 Đối chiếu nhanh mã nguồn gốc: `{st.session_state.filename}`", expanded=False):
            st.code(st.session_state.source_code, language="c", line_numbers=True)
        st.markdown(f"""<div class="page-card"><h3>📥 Mục 5: Xuất & Tải Tệp Kết Quả Đầu Ra (CSV / JSONL) — <code>{st.session_state.filename}</code></h3>
            <p>Trích xuất dữ liệu đầu ra chuẩn theo đúng định dạng yêu cầu trong đề cương.</p></div>""", unsafe_allow_html=True)
        
        st.markdown("#### 1. Tệp `features.csv`")
        csv_df = pd.DataFrame([{"submission_id": Path(st.session_state.filename).stem, "problem_id": "p_demo", "status": "Accepted", **features}])
        st.dataframe(csv_df, use_container_width=True, hide_index=True)
        st.download_button("⬇️ Tải xuống features.csv", data=csv_df.to_csv(index=False).encode("utf-8"), file_name="features.csv", mime="text/csv", type="primary")

        st.markdown("---")
        st.markdown("#### 2. Tệp `conditions.jsonl`")
        jsonl_lines = [json.dumps({"submission_id": Path(st.session_state.filename).stem, "problem_id": "p_demo", **r}, ensure_ascii=False) for r in condition_records]
        jsonl_text = "\n".join(jsonl_lines)
        st.code(jsonl_text if jsonl_text else "// Không có điều kiện", language="json")
        st.download_button("⬇️ Tải xuống conditions.jsonl", data=jsonl_text.encode("utf-8"), file_name="conditions.jsonl", mime="application/jsonl", type="primary")
