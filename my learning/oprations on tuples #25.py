#meathods in tuples to manupulate it

tup=(1,22,33,53,6,"this","Raj")
#tuple cannot change directly

countries=("india","russia","usa","brazil")
temp=list(countries)
temp.append("britain")  
temp.pop(2)
temp[1]="Finland"
countries=tuple(temp)
print(countries)

#we can concatanation directly
add=tup+countries
print(add)

#count
print(add.count(1))


