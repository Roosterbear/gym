from turtle import Turtle, Screen
import random

tim = Turtle()
colores = ["IndianRed","black","SeaGreen","SlateGray","DeepSkyBlue","DarkOrchid","CornFlowerBlue"]

def dibujar_figura(lados):
  angulo = 360 / lados
  for _ in range(lados):
    tim.forward(100)
    tim.right(angulo)

for forma in range(3, 11):
  tim.color(random.choice(colores))
  dibujar_figura(forma)

screen = Screen()
screen.exitonclick()
