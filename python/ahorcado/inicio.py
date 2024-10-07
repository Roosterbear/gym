import random
import dibujos
import extra

resultado = ["  x_x INCORRECTO x_x","    ¡¡¡CORRECTO!!!"]
respuesta = "      AHORCADO"
oportunidad = 0
letra = ''

indice = random.randint(0,2)

palabra = extra.palabras[indice]

longitud = len(palabra)

# crear un array con guiones para formar palabra adivinada
adivinar = ["_" for _ in range(longitud)]

# palabra adivinada, es con la que vamos a trabajar
adivinado = "".join(adivinar)
  
while True:
  print("----------------------")
  print("                      ")
  print(respuesta)
  print("                      ")
  print("----------------------")

  print("                      ")
  print("                      ")
  print("                      ")
  print("                      ")
  print("                      ")
  print(dibujos.etapa[oportunidad])

  if letra == "0" or oportunidad >= 5 or adivinado == palabra:
    if adivinado == palabra: 
      print("----------------------")
      print("      GANASTE!!!      ")
      print("----------------------")
    print("----- TERMINADO ------")
    break

  print("                      ")
  print("---Adivina la frase---")
  print("----------------------")
  print("Oprime un cero para SALIR")
  print("----------------------")  
  print(adivinar)
  print(adivinado)
  print("                      ")
  
  letra = input("Dime una letra: ")
  letra = letra.upper()

  if letra in palabra:
    respuesta = resultado[1]
    adivinar = extra.cambia(adivinar, palabra, letra)  
        
    adivinado = "".join(adivinar)
    
  else:
    respuesta = resultado[0]
    oportunidad = oportunidad+1




  