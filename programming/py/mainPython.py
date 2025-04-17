# This is a comment in Python
"""
Here is a multi
line comment
"""

# Indentation is super important in Python
if 5 > 2:
    print("Five is greater than two!") # Python uses indentation to indicate a block of code. 
    # You have to use the same number of spaces in the smae block of code, otherwise Py will throw error

# Py Vars
x = 5
y = "Hello, World!"

#print("Hello, World!")
print("Cheers, Mate!")

z = "John" # Variables do not need to be declared iwth any particular type, and can even change type after they have been set. 
print(x)
print(y)

# If you want to specify the data type of a variable, this cna be done with casting
# Casting

x = str(3) # will be '3'
y = int(3) # will be '3'
z = float(3) # will be 3.0

print(x,y,z)
print(type(x))
print(type(y)) # gets the type of the var

# you can use single or double quotes for vars

x = "John" 
x = 'John'

# Varaibles names are case-sensitive

a = 4
A = 'Sally'
#A will not overwrite a
myvar = "John"
my_var = 'john'
_my_var = 'john'
MYVAR = 'john'
myvar2 = 'john'
#All different variables

x,y,z = 'Orange', 'Banana', 'Cherry'
print(x)
print(y)
print(z)

#Unpacking
fruits = ['apple', 
'banana', 
'cherry']
x,y,z = fruits
print(fruits)
print(x,y,z)
