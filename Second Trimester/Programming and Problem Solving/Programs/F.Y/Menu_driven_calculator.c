// Program to make a simple menu driven calculator that can perform basic Arithmatic operations using Switch case

#include <stdio.h>

int main()
{

    float A = 0, B = 0, result = 0;
    int choice = 0;

    printf("What do you want to do? \n1. Add\n2. Subtract \n3. Multiply \n4. Divide \nPlease Enter (1, 2, 3 or 4): ");
    scanf("%d", &choice);
    printf("Enter First Number: ");
    scanf("%f", &A);
    printf("Enter Second Number: ");
    scanf("%f", &B);

    switch (choice)
    {
    case 1:
        result = A + B;
        break;
    case 2:
        result = A - B;
        break;
    case 3:
        result = A * B;
        break;
    case 4:
        result = A / B;
        break;
    default:
        printf("Invalid Choice. Please Try again");
    }

    printf("The Result is: %f", result);

    return 0;
}
