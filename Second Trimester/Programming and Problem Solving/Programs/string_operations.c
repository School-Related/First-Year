//     strlen() computes string's length strcpy() copies a string to another
//     strcat() concatenates(joins) two strings
//     strcmp() compares two strings
//     strlwr() converts string to lowercase
//     strupr() converts string to uppercase

// Write a menu driven program to perform all string operations (user defined functions)

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// User Defined Functions
int str_length(char *ptr)
{
    /*
        Function: Returns the number of characters in the given character.
        Input: char * pointing to the character array.
        Returns: Integer.
     */
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char *str_concat(char *user_string_1, char *user_string_2)
{
    /*
        Function: Returns a character pointer pointing to an array of characters that is made by concatenating 2 strings.
        Input: char * pointing to the 2 strings.
        Returns: char *.
     */

    // allocating on the heap coz otherwise it would be a local variable
    // that you cant pass outside the scope of this function as a pointer, as memory would be invalid.
    char *concat_string = malloc(1000);
    strcpy(concat_string, user_string_1);
    for (int i = 0; i <= str_length(user_string_2); i++)
    {
        concat_string[str_length(user_string_1) + i] = user_string_2[i];
    }
    return concat_string;
}
int str_compare(char *user_string_1, char *user_string_2)
{
    /*
        Compares the C string str1 to the C string str2.
        This function starts comparing the first character of each string.
        If they are equal to each other, it continues with the following pairs until the characters
        differ or until a terminating null-character is reached.
        Returns:
        <0	the first character that does not match has a lower value in ptr1 than in ptr2
        0	the contents of both strings are equal
        >0	the first character that does not match has a greater value in ptr1 than in ptr2
    */
    int result = 0;
    for (int i = 0; user_string_1[i] != '\0' || user_string_2[i] != '\0'; i++)
    {
        if (user_string_1[i] == user_string_2[i])
        {
            if (user_string_1[i + 1] == '\0' && user_string_2[i + 1] != '\0')
            {
                result = 0;
                continue;
            }
            else if (user_string_1[i + 1] == '\0' && user_string_2[i + 1] != '\0')
            {
                result = -1;
            }
            else if (user_string_1[i + 1] == '\0' && user_string_2[i + 1] == '\0')
            {
                result = 0;
            }
            if (user_string_1[i + 1] != '\0' && user_string_2[i + 1] == '\0')
            {
                result = 1;
            }
        }
        else if (user_string_1[i] < user_string_2[i] || user_string_1[i] > user_string_2[i])
        {
            result = (user_string_1[i] - user_string_2[i]) / abs(user_string_1[i] - user_string_2[i]);
            break;
        }
    }
}
char *str_lower(char *user_string)
{
    /*
    Returns a new char * to an array that contains the converted lowercase of the user_string
    */
    char *lower_string = malloc(1000);
    strcpy(lower_string, user_string);
    for (int i = 0; i < str_length(lower_string); i++)
    {
        if (lower_string[i] >= 'A' && lower_string[i] <= 'Z')
        {
            int AASCI_val = lower_string[i] + 32;
            lower_string[i] = AASCI_val;
        }
    }
    return lower_string;
}
char *str_upper(char *user_string)
{
    /*
    Returns a new char * to an array that contains the converted uppercase of the user_string
    */
    char *upper_string = malloc(1000);
    strcpy(upper_string, user_string);
    for (int i = 0; i < str_length(upper_string); i++)
    {
        if (upper_string[i] >= 'A' && upper_string[i] <= 'Z')
        {
            int AASCI_val = upper_string[i] - 32;
            upper_string[i] = AASCI_val;
        }
    }
    return upper_string;
}
char *str_reverse(char *user_string)
{
    /*
    Returns a new char * to an array that contains the reversed user_string
    */

    // allocating on the heap coz otherwise it would be a local variable
    // that you cant pass outside the scope of this function as a pointer, as memory would be invalid.
    char *rev_string = malloc(1000);
    strcpy(rev_string, user_string);
    for (int i = 0; i < str_length(user_string); i++)
    {
        rev_string[i] = user_string[str_length(user_string) - i - 1];
    }
    rev_string[str_length(user_string)] = '\0';
    return rev_string;
}

int main()
{
    int choice = 0;
    char user_string[500];
    char user_string_1[500], user_string_2[500];

    printf("Enter What operation you want to perform [1, 2, 3, 4, 5]: \n\
        1. Find the length of the String\n\
        2. Concatenate 2 Strings\n\
        3. Compare 2 Strings\n\
        4. Convert a String to lowercase\n\
        5. Convert a String to Uppercase\n\
        6. Reverse a string\n\
        ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the String that you want to find the length of: ");
        scanf("%s", &user_string);
        printf("The Length is: %d", str_length(user_string));
        break;
    case 2:
        printf("Enter the First String: ");
        scanf("%s", &user_string_1);
        printf("Enter the First String: ");
        scanf("%s", &user_string_2);
        printf("The Concatenated is: %s", str_concat(user_string_1, user_string_2));
        break;
    case 3:
        printf("Enter the First String: ");
        scanf("%s", &user_string_1);
        printf("Enter the First String: ");
        scanf("%s", &user_string_2);
        printf("The Comparison of the Strings is: %d", str_compare(user_string_1, user_string_2));
        break;
    case 4:
        printf("Enter the String that you want to convert to lowercase to: ");
        scanf("%s", &user_string);
        printf("The converted String is: %s", str_lower(user_string));
        break;
    case 5:
        printf("Enter the String that you want to convert to Uppercase to: ");
        scanf("%s", &user_string);
        printf("The converted String is: %s", str_upper(user_string));
        break;
    case 6:
        printf("Enter the String that you want to reverse: ");
        scanf("%s", &user_string);
        printf("The converted String is: %s", str_reverse(user_string));
        break;
    default:
        printf("Incorrect Choice, Please try again.");
    }
    return 0;
}