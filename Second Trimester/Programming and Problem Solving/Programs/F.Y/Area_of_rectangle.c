#include<stdio.h>
int main()
{
    float l = 0, b = 0, area = 0;
    
    printf("Enter the value of Length: ");
    scanf("%f", &l);
    printf("Enter the value of Breadth: ");
    scanf("%f", &b);

    area = l * b;
    printf("The Area is: %f", area);
    return 0;
}
