// Write a C program to compute the factorial of a given number using recursion. 

#include<stdio.h>

double factorial(int number)
{
    if(number == 1)
        return 1;
    return number * factorial(number - 1);
}


int main()
{
    int a = 0;
    printf("Enter the number whose factorial you want: ");
    scanf("%d", &a);
    printf("The factorial of the number is: %.1lf", factorial(a));
    return 0;
}
// Enter the number whose factorial you want: 5
// The factorial of the number is: 120.0