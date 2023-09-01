#include <stdio.h>
int main()
{
    int arr[10] = {7, 67, 4, 123, 8, 1, 3, 2, 6, 0

    };
    int n = 10;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (int u = 0; u < n; u++)
    { 
        printf("%d ", arr[u]);
    }
    return 0;
}