#include<stdio.h>
int main()
{
    float volume = 0, area = 0, radius = 0, PI = 3.14;
    printf("Enter radius");
    scanf("%f", &radius);
    volume = (4 / 3) * PI * radius * radius;
    area = PI * radius * radius * 4;
    printf("Volume is %f\n", volume);
    printf("Area is %f", area);
}
