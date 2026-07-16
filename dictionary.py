# student = dict(name = "Ashrith",age = 18,branch = "CSE")
# print(student)

# print(student["age"])
# student["collage"] = "CUH"
# print(student)
# student["age"] = 19
# print(student)
# student.pop("branch")
# print(student)
# x = student.keys()
# print(x)
# y = student.values()
# print(y)
# z = student.items()
# print(z)


marks = {
    "Math": 90,
    "Physics": 85,
    "Chemistry": 88
}
total = 0
for x in marks.values():
    total +=x

print(total)

count = 0
for y in marks.items():
    count +=1

print(count)


if "Physics" in marks:
    print("found")
else:
    print("Not found")