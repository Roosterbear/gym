palabras = [
  "COMPUTADORA", 
  "SOFTWARE", 
  "TECLADO",
  "MOUSE",
  "PANTALLA",
  "IMPRESORA",
  "INTERNET"]

def cambia(adivinar, palabra, letra):  
  for indice, caracter in enumerate(palabra):
    if caracter == letra:
      adivinar[indice] = letra
  
  return adivinar