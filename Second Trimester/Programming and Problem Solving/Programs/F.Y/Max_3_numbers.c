#include <stdio.h>
int main()
{
    float a = 0, b = 0, c = 0, area = 0;

    printf("Enter the First Number: ");
    scanf("%f", &a);
    printf("Enter the Second Number: ");
    scanf("%f", &b);
    printf("Enter the Third Number: ");
    scanf("%f", &c);

    

    if (a > b && a > c)
    {
        printf("First Number is greater");
    }
    else if (b > a && b > c)
    {
        printf("Second Number is greater");
    }
    else if (c > a && c > b)
    {
        printf("Third Number is greater");
    }
    return 0;
}