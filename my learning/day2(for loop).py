#lerning for loops
#helps to execute code repetetively
name="rajveer"  #takes input
for i in name:  #taking every character
    print (i)   #printting every character 
    if(i == "j"):    #adding id statement in the for loop i=variable
        print("something special")
    
#Now as for loop is itreating the one character in string
#similarly it itrates the object in list, or in dictionary
    
list=["red","blue"]
for colour in list:
    print(colour)
    for i in colour:
        print(i)
        
#rangefunction
for i in range(9):   # paste till the 0 to 8
            
    print (i)
    
#activity - print rajveer for 50 times using the for loop and range.
name="rajveer"
for i in range(50):
    print(name)
    