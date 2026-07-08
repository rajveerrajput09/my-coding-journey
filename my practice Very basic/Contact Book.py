contact = {
    
}

while True:
    print('''====== CONTACT BOOK ======

1. Add Contact
2. Search Contact
3. Delete Contact
4. View All Contacts
5. Exit
''')

    choice = input("Entre your choice: ")
    
    if choice == "1":
        name = input("Entre your name: ")
        phone = input("entre your phone number: ")
        print("contact added succsesfully")
        contact[name]= phone
        
        continue
        
    elif choice == "2":
        search = input ("Enter name to search: ")

        if search in contact:
            print(contact[search])
            
        else:
            print("Contact not found")
        
    elif choice == "4":
        for i in contact:
            print(i,contact[i])
        
    elif choice == "3":
        delete = input("Enter name to delete:")
        if delete in contact:
            del contact[delete]
            print("contact delete succesfully")
        else:
            print("Contact not found.")
        
    elif choice == "5":
        print ("Thank you for using Contact book!")
        break
    
    else:
        print("Entre the valid demand")