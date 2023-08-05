#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 6; i++)
    {
        printf("enter the aarray element with index %d =>",i);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] % 2 != 0)
        {
            arr[j] *= 2;
        }
        else
        {
            arr[j] += 10;
        }
    }
    printf("new arrray is as follows \n");

    for (int s = 0; s < 6; s++)
    {
        printf("new arrray element with index is %d =>%d \n",s,arr[s]);
    }
    return 0;
}