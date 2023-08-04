#Write a Python Program to read a x and y from user and evalute the following expression:
#x^2+2xy+y^2

x=int(input("Enter x: "))
y=int(input("Enter y: "))

result = pow(x,2) + 2*x*y + pow(y,3)

print(f"The computed result for input {x} and {y} is {result}")