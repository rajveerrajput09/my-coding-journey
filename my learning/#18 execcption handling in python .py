#Everytime error comes in our python
#so we use exeption to handle the error

a = input("entre the a: ")
print(f"Multiplication table of {a} is: ")

try:
    for i in range(1,11):
        print(f"{int(a)} X {i} = {int(a)*i}")
except:
    ... #just trying thats why no need to write any specific error
    
print("good boy")        
        
        
        