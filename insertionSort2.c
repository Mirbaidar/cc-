#include <stdio.h>
int main()
{
    int arr[50];
    int n;
    printf("enter the limit less then 50 :");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" \nArray elements before sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    // insertion sort
    for (int k = 1; k < n; k++)
    {
        int temp = arr[k];
        int j = k - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    //
    printf(" \nArray elements after sort \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}