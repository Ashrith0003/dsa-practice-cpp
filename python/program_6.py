contacts = {}

while True:
    print("\n--- Phonebook Menu ---")
    print("1. Add Contact")
    print("2. View All Contacts")
    print("3. Search Contact")
    print("4. Update Contact")
    print("5. Delete Contact")
    print("6. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        name = input("Enter name: ")
        phone = input("Enter phone number: ")
        email = input("Enter email: ")

        contacts[name] = {
            "Phone": phone,
            "Email": email
        }
        print("Contact added successfully!")

    elif choice == "2":
        if not contacts:
            print("Phonebook is empty.")
        else:
            print("\nAll Contacts:")
            for name, details in contacts.items():
                print("Name:", name)
                print("Phone:", details["Phone"])
                print("Email:", details["Email"])
                print("-------------------")

            print("Contact Names:", list(contacts.keys()))
            print("Contact Details:", list(contacts.values()))

    elif choice == "3":
        search_name = input("Enter name to search: ")

        # List comprehension for dynamic lookup
        result = [
            (name, details)
            for name, details in contacts.items()
            if search_name.lower() in name.lower()
        ]

        if result:
            for name, details in result:
                print("Name:", name)
                print("Phone:", details["Phone"])
                print("Email:", details["Email"])
        else:
            print("Contact not found.")

    elif choice == "4":
        name = input("Enter name to update: ")

        if name in contacts:
            print("1. Update Phone")
            print("2. Update Email")
            field = input("Choose field: ")

            if field == "1":
                contacts[name]["Phone"] = input("Enter new phone number: ")
                print("Phone number updated successfully!")
            elif field == "2":
                contacts[name]["Email"] = input("Enter new email: ")
                print("Email updated successfully!")
            else:
                print("Invalid field choice.")
        else:
            print("Contact not found.")

    elif choice == "5":
        name = input("Enter name to delete: ")

        if name in contacts:
            del contacts[name]
            print("Contact deleted successfully!")
        else:
            print("Contact not found.")

    elif choice == "6":
        print("Exiting Phonebook. Goodbye!")
        break

    else:
        print("Invalid choice. Please try again.")