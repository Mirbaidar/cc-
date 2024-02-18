#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the limit of elements : ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements before linear sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    // linear sort;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printing elements after linear sort
    printf("Elements after linear sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}