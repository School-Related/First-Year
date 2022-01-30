#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;
    printf("Enter the elements for first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d ", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements for second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &b[i][j]);
        }
        printf("\n");
    }

}