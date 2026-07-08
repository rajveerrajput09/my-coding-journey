#this code is basic range code that printsfrom 1 to 6

for i in range (1,6):
    print("rajveer") #print rajveer 3 times
    
for i in range (1,6):
    print (i) #print till 5
    
for i in range(1,6):
    print("rajveer")
    if (i==5):
        print("this is if statement")#print this statement when range==5
        
for i in range(1,6):
    print("rajveer")
    if (i==5):
        print("this is if statement"*5 )#this print statement for 5 times
        
for i in range(1,6):
    if (i==5):
        print("this is if statement"*5 )
    else:
        print("this is not good loop")#this print when i != 5
        