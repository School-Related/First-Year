#include <stdio.h>
int main()
{
    float a = 0, b = 0, area = 0; // declaring the variable

    printf("Enter the First Number: ");
    scanf("%f", &a);
    printf("Enter the Second Number: ");
    scanf("%f", &b);

    if(a > b)
    {
        printf("First Number is greater");
    }
    else
    {
        printf("Second Number is greater");
    }
    return 0;
}