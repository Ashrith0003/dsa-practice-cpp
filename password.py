# s = str(input("enter the string :"))
# count = 0
# for i in range(len(s)):
#     if(s[i] in "aeiouAEIOU"):
#         count+=1
# print("number of vowels: ",count)
arr =  [10, 20, 4, 45, 99]
max_element = float('-inf')
second_max = float('-inf')
third_max  = float('-inf')
for i in range(len(arr)):
    if(arr[i] > max_element):
        second_max = max_element
        max_element = arr[i]
        third_max = second_max
    elif arr[i] > second_max and arr[i] != max_element:
        second_max = arr[i]

    
print("the max element is :",max_element)
print("the second max element is :",second_max)
print("the third max :",third_max)        
