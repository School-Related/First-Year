// #include<string.h>
// #include<stdio.h>
// int main(){
//     char* A = "counting\0";
//     char* B = "counting   aadsfjahkdjsfljsaddf\0";
//     printf("%d", strcmp(A, B));
//     return 0;
// }

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// User define functions

int str_len(char *c)
{
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char *str_copy(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] != '\0';
    return str2;
}

void str_compare(char str1[], char str2[])
{
    for (int i = 0; str1[i] != '\0' || str1[i] != '\0'; i++)
    {
        printf("The %d th letter: ", i + 1);
        if (str1[i] > str2[i])
        {
            printf("Str1 > Str2");
        }
        else if (str1[i] < str2[i])
        {
            printf("Str1 < Str2");
        }
        else
        {
            printf("Str1 == Str2");
        }
        printf("\n");
    }

    // make it to int
    // for returning the comparison between length
    // if(str_len(str1) > str_len(str2))
    //     return 1;
    // else if (str_len(str1) == str_len(str2))
    //     return 0;
    // else
    //     return -1;
}

char *str_concat(char *str1, char *str2)
{
    // 01234
    // asdfqwer\0;
    // qwer\0;
    // asdfqewr\0;

    int i = 0;
    for (int i = 0; i < str_len(str2); i++)
    {
        printf("%s\n", str1);
        str1[str_len(str1) + i] = str2[i];
        printf("%c", str1[str_len(str1)]);
        printf("%s\n\n", str1);
    }
    printf("%s", str1);
    return str1;
}

// main program
void main()
{
    int choice = 0;
    char str[500];
    char str1[500], str2[500];

    printf("Select the operation you want to perform\n\
            \t1.Find the length of the string\n\
            \t2.Copy 2 String\n\
            \t3.Compare 2 Strings\n\
            \t4.Concatenate 2 Strings\n\
            Your choice(1,2,3,4):");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the string that you want to find length of:");
        scanf("%s", &str);
        printf("\nThe length of string:%d\n", str_len(str));
        break;

    case 2:
        printf("Enter the string to copy it:");
        scanf("%s", &str1);
        printf("String 2:%s", str_copy(str1, str2));
        break;

    case 3:
        printf("Enter the 1st string:");
        scanf("%s", &str1);
        printf("Enter the 2nd string:");
        scanf("%s", &str2);
        str_compare(str1, str2);
        break;
    case 4:
        printf("Enter the 1st string:");
        scanf("%s", &str1);
        printf("Enter the 2nd string:");
        scanf("%s", &str2);
        printf("String 2:%s", str_concat(str1, str2));
    }
}