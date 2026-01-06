import PyPDF2
import os

# === 設定 ===
input_pdf_path = "input.pdf"  # << 你的原始 PDF 名稱
output_folder = "split_chapters"
page_ranges = [
    (24, 143),
    (144, 223),
    (224, 273),
    (274, 353),
    (354, 427),
    (428, 491),
    (492, 549),
    (550, 621),
    (622, 695),
    (696, 803),
    (804, 869),
    (870, 907),
    (908, 965),
]

# === 準備 ===
os.makedirs(output_folder, exist_ok=True)
reader = PyPDF2.PdfReader(input_pdf_path)

# === 依據範圍輸出每章 ===
for i, (start, end) in enumerate(page_ranges, start=1):
    writer = PyPDF2.PdfWriter()
    for page_num in range(start - 1, end):  # PyPDF2 是 0-based
        writer.add_page(reader.pages[page_num])
    output_path = os.path.join(output_folder, f"chapter_{i:02d}_p.{start}-p.{end}.pdf")
    with open(output_path, "wb") as f:
        writer.write(f)
    print(f"Saved: {output_path}")
