#suggest what to do(breakfast,lunch,evening)
#according to time

def main():
    a = input("What time is it : ").lower().strip(" ")
    a = convert(a)
    if 7.0<= a <=8.0:
        print("its breakfast time")
    elif 12.00<= a <= 13.00:
        print("its lunch time")
    elif 18.00<= a <= 19.00:
        print("its dinner time")
    

def convert(time):
    x ,y= time.split(":")
    x=float(x)
    y=float(y)
    exp= x + y/60
    return exp


if __name__ == "__main__":
    main()