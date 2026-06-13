#RECURSION IN PYTHON

#factorial (7)=7*6*5*4*3*2*1
#factorial (6)=6*5*4*3*2*1
#factorial (5)=5*4*3*2*1

#factoraial(n)=n*factorial(n-1)

def factorial(n):
    if (n==0) or (n==1):
        return 1
    
    else:
        return n * factorial(n-1)

print(factorial(3))

#Let's make the fin=bonacci series using the Recursion in python

def fibonacci(n):
    if n == 0:
        return 0
    elif n==1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
    
print(fibonacci(6))

