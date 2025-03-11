def classify_age(age):
    if age < 0:
        print("Invalid Age! Enter a non-negative value.")
    elif age <= 12:
        print("You are a child.")
    elif age <= 19:
        print("You are a teen.")
    elif age <= 64:
        print("You are an adult.")
    else:
        print("You are a senior.")

#Inputs here
user_input = int(input("Enter you age: "))
classify_age(user_input)
