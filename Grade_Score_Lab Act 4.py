def assign_grade(score):
    if score < 0 or score > 100:
        print("Invalid score! Please enter a value between 0 and 100.")
    elif score >= 90:
        print("Grade: A")
    elif score >= 80:
        print("Grade: B")
    elif score >= 70:
        print("Grade: C")
    elif score >= 60:
        print("Grade: D")
    else:
        print("Grade: F")

#Input here
user_input = int(input("Enter student's score here: "))
assign_grade(user_input)
