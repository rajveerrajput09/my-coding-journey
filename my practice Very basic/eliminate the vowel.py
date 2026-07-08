user_input=input("Enter the Word: ")
vowels=("AEIOUaeiou")
       
final = ("")

for i in user_input:
    if i in vowels:
        final+=i
        
print (final)        