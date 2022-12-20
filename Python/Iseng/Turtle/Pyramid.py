from turtle import * 
colors = ["brown","gold","yellow"]

bgcolor('cyan')
speed(0)

kocak = Turtle()
kocak.speed(0)

for i in range(500):
    pencolor(colors[i%3])
    forward(i)
    left(12000)


hideturtle()

exitonclick()