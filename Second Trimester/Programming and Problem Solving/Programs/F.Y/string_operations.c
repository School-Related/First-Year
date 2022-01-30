//     strlen() computes string's length strcpy() copies a string to another
//     strcat() concatenates(joins) two strings
//     strcmp() compares two strings
//     strlwr() converts string to lowercase
//     strupr() converts string to uppercase

// Write a menu driven program to perform all string operations (user defined functions)

#include <string.h>
#include <stdio.h>

// User Defined Functions
int str_length(char a[])
{
    return strlen(a);
}

char *str_concat(char user_string_1[], char user_string_2[])
{
    char concat_string[] = strcat(user_string_1, user_string_2);
    return concat_string;
}

char *str_compare(char user_string_1[], char user_string_2[])
{
    char compared_string[] = strcmp(user_string_1, user_string_2);
    return compared_string;
}

char *str_lower(char user_string[])
{
    return strlwr(user_string);
}

char *str_upper(char user_string[])
{
    return strupr(user_string);
}

int main()
{
    int choice = 0;
    char user_string[] = "";

    printf("Enter What operation you want to perform [1, 2, 3, 4, 5]: \n\
        1. Find the length of the String\n\
        2. Concatenate 2 Strings\n\
        3. Compare 2 Strings\n\
        4. Convert a String to lowercase\n\
        5. Convert a String to Uppercase\n\
        ");
    scanf("%d", choice);
    switch (choice)
    {
    case 1:
        printf("Enter the String that you want to find the length of: ");
        scanf("%d", user_string);
        printf("The Length is: %d", str_length(user_string));
        break;
    case 2:
        char user_string_1[] = "";
        char user_string_2[] = "";
        printf("Enter the First String: ");
        scanf("%d", user_string_1);
        printf("Enter the First String: ");
        scanf("%d", user_string_2);
        printf("The Concatenated is: %s", str_concat(user_string_1, user_string_2));
        break;
    case 3:
        printf("Enter the First String: ");
        scanf("%d", user_string_1);
        printf("Enter the First String: ");
        scanf("%d", user_string_2);
        printf("The Comparison of the Strings is: %s", str_compare(user_string_1, user_string_2));
        break;
    case 4:
        printf("Enter the String that you want to convert to lowercase to: ");
        scanf("%d", user_string);
        printf("The converted String is: %s", str_lower(user_string));
        break;
    case 5:
        printf("Enter the String that you want to convert to Uppercase to: ");
        scanf("%d", user_string);
        printf("The converted String is: %s", str_upper(user_string));
        break;
    }
    return 0;
}