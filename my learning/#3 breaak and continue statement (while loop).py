#break statement terminate the loop
i=1
while i<=5:
    print(i)
    if i == 3:
        break  #break keyword
    i=i+1
    
print("end of loop")

# continue is of opposite of break
i=1
while i<=5:
    if i==3:
        i=i+1
        continue #this skips the 3
    print(i)
    i=i+1
    
    