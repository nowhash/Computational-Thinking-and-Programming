'''
Write a Python program that will ask for the number of days and then compute equivalent hours, minutes and seconds
Print those as follows.
Input: Enter the number of days: 7
Output:
In [no of days] days, there are [no of hours] hours, [no of minutes]
minutes, and [no of seconds] seconds.
'''

day=int(input("Enter the number of days: "))

hour=day*24
minutes=hour*60
seconds=minutes*60

print(f"In {day} days, there are {hour} hours, {minutes} minutes, and {seconds} seconds.")
