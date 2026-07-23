#we can use it with try and except

try:
    x = 1 / 0
except ZeroDivisionError:
    print("Cannot divide by zero")
finally:
    print("i am don")
    
#if i have the print then why to use finally -in function   