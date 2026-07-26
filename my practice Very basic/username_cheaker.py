# Length between 4 and 12.
# First character must be a letter.
# Only letters and numbers are allowed.
# Username must contain at least one digit.

def is_valid_username(username):
    
    has_digit = False
    
    if len(username)>12 or len(username)<4:
        return False
    if not username[0].isalpha():
        return False
    if not username.isalnum():
        return False
    for char in username:
        if char.isdigit():
            has_digit = True
    return has_digit
    
    
def main():
        name = input("Entre your username: ")
        if is_valid_username(name):
            print("Valid")
            
        else:
            print("Not Valid")
            
main()            