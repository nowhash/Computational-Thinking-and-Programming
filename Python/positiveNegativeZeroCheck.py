'''
Write a program in Python to read a number from user and check whether the number is Positive, Negative, or Zero
'''

number=int(input("Enter a number: "))

if(number>0):
    print(f"Positive")
elif (number<0):
    print(f"Negative")
else:
    print(f"Zero")