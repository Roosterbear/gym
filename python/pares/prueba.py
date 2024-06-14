#!/usr/bin/env python3

def pares(numero):
  return True if(numero % 2 == 0) else False

numeros = [1,2,3,12,17,18,21,22]
filtro_pares = filter(pares, numeros)
print([par for par in filtro_pares])