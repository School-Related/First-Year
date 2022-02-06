# Program to sort an array in python using default list sort function and then using Bubble sort.

initial_list = []
limit = int(input("How many elements are there in the list?"))

for i in range(limit):
    val = int(input())
    initial_list.append(val)
bubble_sort = initial_list[:]

print('Here is the Array sorted in Ascending order by default sort function')
initial_list.sort()
print(initial_list)

print('Here is the Array sorted in Descending order by default sort function')
initial_list.reverse()
print(initial_list)

for i in range(len(bubble_sort)):
    for j in range(len(bubble_sort) - 1):
        if bubble_sort[j] > bubble_sort[j + 1]:
            bubble_sort[j], bubble_sort[j + 1] =  bubble_sort[j +1], bubble_sort[j]

print('Here is the list sorted in Ascending order by Bubble sort')
print(bubble_sort)

print('Here is the list sorted in descending Order by Bubble Sort')
bubble_sort.reverse()
print(bubble_sort)

# How many elements are there in the list? 5
# 2
# 1
# 45
# 2
# 1
# Here is the Array sorted in Ascending order by default sort function
# [1, 1, 2, 2, 45]
# Here is the Array sorted in Descending order by default sort function
# [45, 2, 2, 1, 1]
# Here is the list sorted in Ascending order by Bubble sort
# [1, 1, 2, 2, 45]
# Here is the list sorted in descending Order by Bubble Sort
# [45, 2, 2, 1, 1]
