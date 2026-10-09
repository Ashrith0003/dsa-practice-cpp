# A 2D matrix represented as a nested list
matrix = [
    [10, -5, 20],
    [15, -8, 25],
    [30, 12, -3]
]

print("Original Matrix:")
for row in matrix:
    print(row)


filtered_matrix = [
    list(filter(lambda x: x >= 0, row))
    for row in matrix
]

print("\nMatrix after removing negative numbers:")
for row in filtered_matrix:
    print(row)


transformed_matrix = [
    list(map(lambda x: x * 2, row))
    for row in filtered_matrix
]

print("\nMatrix after multiplying each element by 2:")
for row in transformed_matrix:
    print(row)


sorted_matrix = [
    sorted(row, reverse=True)
    for row in transformed_matrix
]

print("\nMatrix rows sorted in descending order:")
for row in sorted_matrix:
    print(row)


data = [(3, 30), (1, 10), (4, 40), (2, 20)]


sorted_data = sorted(data, key=lambda x: x[0])

print("\nTuples sorted by first element:")
print(sorted_data)

filtered_data = list(filter(lambda x: x[1] > 20, data))

print("\nTuples with second element greater than 20:")
print(filtered_data)

numbers = [1, 2, 3, 4, 5]
squares = list(map(lambda x: x ** 2, numbers))

print("\nSquares of numbers:")
print(squares)