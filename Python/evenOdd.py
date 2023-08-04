'''
Write a Program in python to read a number from user and check whether the number is even or odd
'''

number=int(input("Enter a Number: "))

if(number%2==0):
    print(f"{number} is EVEN")
else:
    print(f"{number} is ODD")