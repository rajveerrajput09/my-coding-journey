#docstrings help to understand the functions

def square(n):
    '''this takes the number and give the square of it'''
    print(n**2)
    
square(5)

#what is diffrence between the docstrings and pseudocode

print(square.__doc__) #gives result-this takes the number and give the square of it

#means python dont ignore this like comments

#we have to write the doc string right below def or function
def square(n):
    print(n)
    '''this takes the number and give the square of it'''
    print(n**2)
    
square(5)
print(square.__doc__) #shows none because id not exactly below the function

