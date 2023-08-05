#include<stdio.h>
int main()
{
    int arrsize, arr[5], maxValue = arr[0];
    printf("enter the size of array : ");
    scanf("%d", &arrsize);
    for (int i = 0; i < arrsize; i++)
    {
        printf("Enter the arrray elements with index (%d) :", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < arrsize; j++)
    {
        if (maxValue < arr[j])
        {
            maxValue = arr[j];
        }
    }
    printf("maximum value in array is %d", maxValue);
    return 0;
}