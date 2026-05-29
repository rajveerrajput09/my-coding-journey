#search for the no. x in the tuple
tuple=(1,4,9,16,25,36,49,64,81,100,49)
x=49
idx=0
for i in tuple:
    if (i == x):
        print ("the number found att idx",idx)
    idx=idx+1    