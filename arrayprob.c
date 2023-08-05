#include <stdio.h>
int main()
{
    int num;
    printf("enter the number of students");
    scanf("%d", &num);

    int arr[num][3];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
printf("student no.  rool no. marks \n ");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}