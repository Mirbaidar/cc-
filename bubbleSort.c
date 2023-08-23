#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arry[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", arry[i]);
    }
    printf("\n");

    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }

    for (int a = 0; a < 5; a++)
    {
        printf("%d ", arry[a]);
    }
    return 0;
}