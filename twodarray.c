#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number the rows:");
    scanf("%d", &r);

    printf("enter the number the column:");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d ", &arr[i][j]);
        }
    }
    printf(" \n CHECK YOUR OUTPUT \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0] = 3;
    // arr[0][1] = 2;
    // arr[1][0] = 5;
    // arr[1][1] = 6;
    // 3 2
    // 5 6

    return 0;
}