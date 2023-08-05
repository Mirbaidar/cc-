#include <stdio.h>
int main()
{
    int row;
    int arr[3][4] = {{0, 1, 0, 1}, {1, 1, 1, 1}, {1, 0, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count += 1;
            }
        }
        if (count>max)
        {
            row=i;
            max = count;
        }
    }
    printf("the maximum number of 1s is : %d \n the row is %d",max,row);
    return 0;
}