#In deep.py, implement a program that prompts the user for the
#answer to the Great Question of Life, the Universe and Everything, outputting Yes if the user inputs 42 or (case-insensitively) forty-two or forty two. Otherwise output No.
a = input("what is the qestion to the great question of life,the universe and anything: ").lower().strip(" ")

if a == "forty two" or a == "forty-two" or a=="42":
    print("yes")
    
else:
    print("no")


