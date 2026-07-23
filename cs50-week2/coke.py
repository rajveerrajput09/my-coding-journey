amount= 50

while amount > 0:
    print ("Amount Due:",amount)
    coin = int(input("Inssert Coin: "))


    if coin == 25:
        amount = amount - 25
    elif coin == 10:
        amount = amount - 10
    elif coin == 5:
        amount = amount - 5

if amount<0:
        print("Change Owed:",-amount)
else:
    print("Change Owed:", 0)