'''
In Python ** is used to assign exponent value
Example: 5**2 = 25

Instead of this, we can also use, pow function
'''
x=int(input("Enter x: "))
y=int(input("Enter y: "))

result=(((5*x)/y) + 2*x*x)**2

print(f"The computed result is: {result}")