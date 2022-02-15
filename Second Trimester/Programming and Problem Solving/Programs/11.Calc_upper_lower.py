# Program to Print the number of upper and lower case characters in a given string.

print('Enter the string you want to calculate upper and lower case characters of: ')
user_string = input()

upper_count = 0
lower_count = 0

for i in user_string:
    if i.isupper():
        upper_count +=1
    elif i.islower():
        lower_count +=1
        
print('The number of upper case characters in the given string are: ', upper_count)
print('The number of lower case characters in the given string are: ', lower_count)


# Enter the string you want to calculate upper and lower case characters of:
# Upper
# The numeber of upper case characters in the given string are:  1
# The numeber of lower case characters in the given string are:  4