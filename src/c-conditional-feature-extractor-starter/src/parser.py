import tree_sitter
import tree_sitter_c

# Khởi tạo bộ phân tích cú pháp Tree-sitter cho ngôn ngữ C
C_LANGUAGE = tree_sitter.Language(tree_sitter_c.language())
PARSER = tree_sitter.Parser(C_LANGUAGE)

def parse_source_code(source_bytes):
    """Phân tích chuỗi byte mã nguồn C và trả về cây AST."""
    return PARSER.parse(source_bytes)
