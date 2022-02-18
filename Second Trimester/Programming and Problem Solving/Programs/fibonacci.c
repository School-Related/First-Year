#include <stdio.h>
int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}

int main()
{
    int number = 0, fib = 0;
    printf("Enter the number whose fibonacci Series you want to see: ");
    scanf("%d", &number);
    fib = fibonacci(number);
    printf("The Fibonacci Number is: %d", fib);
    return 0;
}
