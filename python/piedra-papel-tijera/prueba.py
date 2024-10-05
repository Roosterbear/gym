import random

contrario = random.randint(1,3)
jugadas_contrario = ["","PAPEL","TIJERAS","PIEDRA"]
jugadas_usuario = ["PIEDRA","PAPEL","TIJERAS"]

print("PIEDRA[0] - PAPEL[1] - TIJERA[2]")
usuario = int(input("Elige un numero para jugar: "))

if usuario < 0 or usuario > 2:
    print ("Jugada NO válida")
else:
    print("Computadora: "+jugadas_contrario[contrario])
    print("Usuario: "+jugadas_usuario[usuario])
    resultado = contrario - usuario

    if resultado == 1:
        print("Perdiste")
    elif resultado == -1 or resultado == 2:
        print("Ganaste")
    elif resultado == 3 or resultado == 0:
        print("Empate")


