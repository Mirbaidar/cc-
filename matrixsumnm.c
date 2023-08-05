#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows \n");
    scanf("%d", &n);

    int m;
    printf("enter the number of column \n");
    scanf("%d", &m);

    int arr[n][m];
    printf("enter the array elements \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("sum of all array elements is equal to %d", sum);
    return 0;
}