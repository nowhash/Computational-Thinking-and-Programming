number=int(input("Enter a Number: "))

if(number%5==0):
    print(f"YES")
elif(number%5!=0 and number%2==0):
    print(f"Wow! It's an even number")
elif(number>10):
    print(f"OK")
