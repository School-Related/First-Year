// Program to swap 2 numbers using pointers and functions

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    printf("Enter the value of a: ");
    scanf("%d", p1);
    printf("Enter the value of b: ");
    scanf("%d", p2);
    printf("The value of a and b before swapping is %d and %d", a, b);
    swap(p1, p2);
    printf("\nThe value of a and b after swapping is %d and %d", a, b);
    return 0;
}
// Enter the value of a: 1
// Enter the value of b: 2
// The value of a and b before swapping is 1 and 2
// The value of a and b after swapping is 2 and 1