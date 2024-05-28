#!/usr/bin/env python3

cadena = 'Hola crayola'

def do_something(c):
  print(c, end='')
  

for c in cadena:
  do_something(c)

print('\n')
results = [do_something(c) for c in cadena]
print('\n')
results = map(do_something, cadena)
