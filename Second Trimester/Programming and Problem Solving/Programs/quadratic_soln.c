// Program to make a simple menu driven calculator that can perform basic Arithmatic operations using Switch case
#include <stdio.h>
#include <math.h>
int main()
{
    double root_1 = 0, root_2 = 0, a, b, c, det;
    printf("Enter the values of A, B and C");
    scanf("%lf %lf %lf", &a, &b, &c);
    det = sqrt((b * b) - (4 * a * c));
    root_1 = (-b + det) / (2 * a);
    root_2 = (-b - det) / (2 * a);
    printf("The First root is, %lf", root_1);
    printf("The Second root is, %lf", root_2);
}
