#!/usr/bin/env python3

class Mamifero:
  """CREACION DE MAMIFEROS"""
  def __init__(self):
    print("Mamifero creado")

class Perro(Mamifero):
  def __init__(self):
    sujeto = "Un perro"
    predicado = "ha sido creado"
    print(" ".join([sujeto,predicado]))

firulais = Perro()