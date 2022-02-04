#include <stdio.h>
int main()
{
    float radius = 0, area = 0;
    float PI = 3.1415;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The Area is: %f", area);
    return 0;
}