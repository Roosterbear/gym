#!/usr/bin/env python3

print("")
print("\t\t\t PARES v 0.3")
print("*"*80)
tupla = (1,2,3,4,5,6,7,8,9)

pares_cuadrados = [x**2 for x in tupla if x%2 == 0]

for x in pares_cuadrados:
  print(x)