#creating a kbc by python

question1 = ["1. Which of the following is NOT scientifically considered a fruit?A)Tomato B)Pumpkin C)Broccoli D)Pear"  ,"2. Which gas planet is the largest in the Solar System?A) SaturnB) NeptuneC) UranusD) Jupiter"  ,"3. What is the strongest muscle in the human body?A) HeartB) JawC) GlutesD) Biceps"  ,"4. All species of lemurs are native to which island country?A) IndonesiaB) MadagascarC) AustraliaD) Sri Lanka  "]


ans1=(input(question1[0] + "\nYour answer: ")).lower()
if ans1 == "c":
    print("aap jite hai 1 lakh")
    price1= 1000000
    
else:
    price1=0
    print("galat jawab")
    
    
ans2=(input(question1[1] + "\nYour answer: ")).lower()
if ans2 == "d":
    print("aap jite hai 5 lakh")
    price2= 5000000
    
else:
    price2=0
    print("galat jawab")
    
    
ans3=(input(question1[2] + "\nYour answer: ")).lower()
if ans3 == "b":
    print("aap jite hai 20 lakh")
    price3= 20000000
    
else:
    price3=0
    print("galat jawab")
    
ans4=(input(question1[3] + "\nYour answer: ")).lower()
if ans4 == "b":
    print("aap jite hai 1 crore")
    price4= 100000000
    
else:
    price4=0
    print("galat jawab")
    
    
print("toh aap jite hai",(price1+price2+price3+price4))    