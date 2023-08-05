#include <stdio.h>
int main()
{
    int arr[2][2] = {{1, 2}, {7, 4}};
    int atr[2][2] = {{4, 6}, {2, 4}};
    int brr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            brr[i][j] = arr[i][j] + atr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}