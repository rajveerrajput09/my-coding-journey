#making a claculator taking input
#and result as a float

a = input("Expression: ").lower().strip(" ")
x,y,z = a.split(" ")
x = float(x)
z = float(z)

if y == ("+"):
    print(x+z)
    
elif y == ("-"):
    print(x-z)
    
    
elif y == ("*"):
    print(x*z)
    
    
elif y == ("/"):
    print(x/z)
    
else:
    ...