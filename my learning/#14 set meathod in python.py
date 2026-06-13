# Meathod of sets

s1 = {2,3,4,5,5}
s2 ={3,4,22,33,33}

print(s1.union(s2))  #to merge two sets

#to update s1
s1.update(s2)
print(s1)

#intersection in sets
print(s1.intersection(s2))


#intersection_update
s1.intersection_update(s2)
print(s1)

#symmetric_difference
s3=s1.symmetric_difference(s2)
print(s3)

#isdisjoin
print(s2.isdisjoint(s1))

#issuperset
print(s1.issuperset(s2))

#issubset
print(s2.issubset(s3))

print(s1)
print(s2)
s3.update(s1) #using update
print(s3)

s3.remove(33)
print(s3)

#clear
s3.clear()
print(s3)

#using delete
del s3
print(s3)











