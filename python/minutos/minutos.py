#!/usr/bin/env python3

print("")
print("\t\t\t MINS to HOURS v 0.1")
print("*"*80)

minutos = int(input("Cuantos minutos? "))

horas = int(minutos/60)
resto = int(minutos%60)

print("%i horas con %i minutos"%(horas,resto))