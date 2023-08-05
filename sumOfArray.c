#include <stdio.h>
int main()
{
    int arr[4], sum = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the elements of array with element index %d :", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum is equal to = %d", sum);
    return 0;
}