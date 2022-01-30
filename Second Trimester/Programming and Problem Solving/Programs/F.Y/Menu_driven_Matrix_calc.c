// Program to make a simple menu driven calculator that can perform addition and subtraction of matrices using switch cases.
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int choice = 0;
    printf("Enter the First Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the Second Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Select what Operation you want to do [1, 2] :\n\
            1. Addition of Matrices\n\
            2. Subtraction of Matrices\n");
    scanf("%d", &choice);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (choice)
            {
            case 1:
                c[i][j] = a[i][j] + b[i][j];
                break;
            case 2:
                c[i][j] = a[i][j] - b[i][j];
                break;
            default:
                printf("Invalid Input");
                return 0;
            }
        }
    }

    printf("\nThe Resulting Matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Algorithm
Step 1: Start
Step 2: Declare 3 Matrices of Size [3][3] each and assign them to zero. 
Step 3: Input the First Matrix
Step 4: Input the Second Matrix
Step 5: Write another nested For loop
Step 6: Switch the Choice variable inside the for loop
Step 7: If choice is 1, add the values, if choice is 2, subtract the values
Step 6: Output the Third Matrix
Step 7: End

*/