#List mearthod to manupulate list

#append to add more element in list
l=[90,23,1,2,1,1,3,4,5,6,]
print(l)
l.append(7)
print(l)

#reverse in python
l.reverse()
print(l)

#index shown in python
print(l.index(3))


#count in python
print(l.count(1))


#copy in python
m=l.copy()
print(m)

#sort in python
l.sort(reverse=True)# print in descending
print(l)

l.sort() #print in ascending
print(l)
print(len(l)) #shows 11

#insert in python
l.insert(3,"don")
print(l)
print(len(l)) #shows 12 beccoause of insert of "don"

#concating in list , this does not change the l 
m = [4000,8000]
print(l+m)

#extend meathod
l.extend(m)
print(l)







