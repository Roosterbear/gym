#!/usr/bin/env python3

print("Hello "+input("What is your name? "))

age = int(input("How old are you? "))

if age > 30:
    print("Elige una cerveza!")
elif age >=18:
    print("Muestrame tu credencial")
else:
    print("Mejor vete a tu casa")
