age=int(input("Enter a person's age: "))

if(age<18):
    print(f"Sorry, you are not eligible for a discount")
elif (age>=18 and age<=60):
    print(f"Congratulations! You are eligible for a discount")
elif(age>60):
    print(f"Wow! You are eligible for a senior citizen discount")