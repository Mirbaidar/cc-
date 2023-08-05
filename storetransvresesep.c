#include <stdio.h>

int main()
{  
    int r;
    printf("enter the numbner of rows:");
    scanf("%d", &r);
    
    int c;
    printf("enter the numbner of column:");
    scanf("%d", &c);

    printf("Enter your array elements");

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

   printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
          brr[i][j]= arr[j][i];
        }
        printf("\n");
    }
         return 0;
}