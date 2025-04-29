"""
Creator: Collin Mullis
Date: 4-17-2025
Program: Day 1 of Python Practice
"""

# Variables
x = 5
y = "Hello, World!"
z = 'john'

a = 4
A = 7 # Different variable, case-senstive

print("Hello, World!")
print(x)
print(y)

x1 = str(3)
y1 = int(3)
z1 = float(3)

print(x,y,z)
print(x1,y1,z1)
print(type(x1))
print(type(y1))
print(type(z1))

# Global Var
X = 'awesome'

def myfunc():
    X = 'fantastic' # only visible inside the function
    print("Python is " + X )

myfunc()

def myfunc1():
    global x4
    x4 = 'fanstico'

myfunc1()

def myfunc2():
    global x
    x = 'new value'

myfunc2()

print("Pythong is setting a " + x)

print("Python is " + x4) # Needs to be a str to concat

x2,y2,z2 = 'Orange', 'Banana', 'Cherry'
print(x2)
print(y2)
print(z2)

#Unpacking
fruits = [
'apple',
'banana',
'cherry',]

x3,y3,z3 = fruits
print(fruits)
print(x3,y3,z3)

