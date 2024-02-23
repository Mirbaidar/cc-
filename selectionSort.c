#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100], n;
    printf("Enter the limit for array elements: ");
    scanf("%d", &n);

    printf("\nEnter the array elements :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // selection sort

    int min, loc, temp;

    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }

    printf("Sorted array : \n");
    for (int t = 0; t < n; t++)
    {
        printf("%d  ", arr[t]);
    }
    return 0;
}