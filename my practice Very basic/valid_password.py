def is_valid_password(password):
    
    if len(password)>8:
        return True 
        
    upper = False
    lower = False
    digit =False
    
    for i in password:
        if i.isupper():
            upper = True
        if i.islower():
            lower = True   
        if i.isdigit():
            digit = True
            
    return upper and lower and digit        

def main(): 
    a = input("Entre your password: ")
    if is_valid_password(a):
        print("valid")
        
    else:
        print("Wrong")
    
main()   