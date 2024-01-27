#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {2, 4, 1, 5, 3, 8};
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    // selection sort.
    printf("\n");

    for (int j = 0; j < 6 - 1; j++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int k = j; k < 6 - 1; k++)
        {
            if (min > arr[k])
            {
                min = arr[k];
                mindx = k;
            }
        }
        int temp = arr[j];
        arr[j] = min;
        arr[mindx] = temp;
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}