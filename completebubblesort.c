#include <stdio.h>
int main()
{
    int arr[50];
    int n;
    printf("Enter the limit of elements less then 50 :\n");
    scanf("%d", &n);
    printf("Enter the array elements :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The unsorted array elements are : \n");
    for (int k = 0; k < n; k++)
    {
        printf("%d  ", arr[k]);
    }
    // bubble sort technique
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nElements after bubble sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}