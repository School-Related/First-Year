# Program to sort an array in python using default list sort function and then using Bubble sort.

initial_list = []
limit = int(input("How many elements are there in the list?"))

for i in range(limit):
    val = int(input())
    initial_list.append(val)
    
ascending_list = initial_list[:]

print('Here is the Array sorted in Ascending order by default sort function')
ascending_list.sort()
print(ascending_list)

descending_list = initial_list[:]

print('Here is the Array sorted in Descending order by default sort function')
descending_list.sort(reverse=True)
print(descending_list)

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
