#include <stdio.h>
#include<limits.h>
 int main()
{
    int arr[5] = {88, 3, 56, 663, 9};
    int n = 5;

    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindx=-1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }

        int temp = arr[i];
        arr[i] = min; // arr[mindx];
        arr[mindx] = temp;
    }
    printf(" \n Sorted array using selection sort \n");
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }
    return 0;
}