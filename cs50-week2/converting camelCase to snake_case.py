#this convert camelCase to sanke_case
a = input("camelCase :")
for i in a :
    if i.isupper():
        a=a.replace(i,"_"+ i.lower())
        
print ("camel_case:"+a)        
    
    
    
    
    