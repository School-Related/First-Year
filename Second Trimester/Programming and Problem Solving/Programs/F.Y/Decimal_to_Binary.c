#include <stdio.h>
#include <math.h>
int main()
{
    int bin = 0, remainder = 0, dec = 0;

    printf("Please Enter the Decimal Number");
    scanf("%d", &dec);
    for (int i = 0; dec != 0; i++)
    {
        remainder = dec % 2;
        bin = bin + remainder * pow(10, i);
        dec = dec / 2;
    }
    printf("The Number in Binary is: %d", bin);
    scanf("%d", bin);
    return 0;
}