#enumerate function

#before
students = ["jeffery","Rajveer","elon","mark zhukerberg","messi",]
index = 0

for student in students:
    print(student)
    if (index == 1):
        print("Rajveer is GOAT and Father of all")
    index+=1    
    
print("for educational porpose don't take it serious")    

#after 

students = ["jeffery","Rajveer","elon","mark zhukerberg","messi",]

for index,student in enumerate(students,start = 1):  #to change index starting
    print(student) 
    if (index == 1):
        print("boss of everyone")
    
    
print("for educational porpose don't take it serious")   





