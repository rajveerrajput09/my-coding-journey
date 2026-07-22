#raising custom error

a = int(input("entre any number between 1 to 5 "))

if (a<1 or a>5 or ):
    raise ValueError("you do very bad coding")