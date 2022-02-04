// Program to make a simple menu driven calculator that can perform basic Arithmatic operations using Switch case

#include <stdio.h>

int main()
{

    float A = 0, B = 0, result = 0;
    char choice;

    printf("What do you want to do? \na. Add\nb. Subtract \nc. Multiply \nd. Divide \nPlease Enter (a, b, c, d): ");
    scanf("%c", &choice);
    printf("Enter First Number: ");
    scanf("%f", &A);
    printf("Enter Second Number: ");
    scanf("%f", &B);
    switch (choice)
    {
    case 'a':
        result = A + B;
        break;
    case 'b':
        result = A - B;
        break;
    case 'c':
        result = A * B;
        break;
    case 'd':
        result = A / B;
        break;
    default:
        printf("Invalid Choice. Please Try again");
    }
    printf("The Result is: %f", result);

    return 0;
}