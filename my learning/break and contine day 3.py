#break and continue looop
#lets think i am buiding a table of n
num=(int(input("give us number:   ")))
for i in range(16):
    print(num ,"multiply by",i ,"is",(i+1)*num)
#but i wnat to only paste the table till 10    
    if (i == 10):
        break   #break statement is use
    
#now here we are using the continue
#it breaks only the iteration    
    
    
num=(int(input("give us number:   ")))
for i in range(16):
    #i want to skip the 10    
    if (i == 10):
        continue   #continue statement is use    
    
