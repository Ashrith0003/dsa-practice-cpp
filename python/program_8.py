def calculate_statistics(*args, **kwargs):
    # Get all assessment marks
    marks = list(args)

    if not marks:
        return 0, 0, 0, {}


    minimum = min(marks)
    maximum = max(marks)
    average = sum(marks) / len(marks)


    grades = {
        "A": 0,
        "B": 0,
        "C": 0,
        "D": 0,
        "F": 0
    }

    for mark in marks:
        if mark >= 90:
            grades["A"] += 1
        elif mark >= 80:
            grades["B"] += 1
        elif mark >= 70:
            grades["C"] += 1
        elif mark >= 60:
            grades["D"] += 1
        else:
            grades["F"] += 1


    print("\nStudent Information:")
    for key, value in kwargs.items():
        print(key, ":", value)


    return minimum, maximum, average, grades



print("STUDENT 1")
result = calculate_statistics(
    95, 85, 78, 92, 67,
    name="Ashrith",
    department="CSE"
)


minimum, maximum, average, distribution = result

print("Minimum Marks:", minimum)
print("Maximum Marks:", maximum)
print("Average Marks:", round(average, 2))
print("Grade Distribution:", distribution)


print("\nSTUDENT 2")
result = calculate_statistics(
    72, 88, 91, 65,
    name="Rahul",
    department="CSE"
)

minimum, maximum, average, distribution = result

print("Minimum Marks:", minimum)
print("Maximum Marks:", maximum)
print("Average Marks:", round(average, 2))
print("Grade Distribution:", distribution)
