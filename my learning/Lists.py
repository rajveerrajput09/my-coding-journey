#today i am learning Lists

l = [3 , 4, 5,"Rock",True]
print(l)
print(l[2])  #starts from 0 not 1

#how to add in list
#list can change

print(l[-2])#negative index
print([len(l)-2]) #converting into the postitive
print(l[1])#postitive index

#using if conditional in list
if "Rock" in l:
    print("true")
    
else:
    print("false")
    
#to print specific index/ slicing
print(l[1:])
print(l[:-2])

#jumping in list
print(l[::2])
print(l[1::2])

#list comprehension
list=[i for i in range(3)]
print(list)








                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  



