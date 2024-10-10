from docx import Document
## pip install python-docx

PLACEHOLDER = "[data]"

with open("lista.txt") as archivo_nombres:
  nombres = archivo_nombres.readlines()

for nombre in nombres:
    sin_espacios = nombre.strip()
    carta_nueva = Document("carta.docx")
    
    for para in carta_nueva.paragraphs:
        if PLACEHOLDER in para.text:
            para.text = para.text.replace(PLACEHOLDER, sin_espacios)
    
    carta_nueva.save(f"carta_para_{sin_espacios}.docx")