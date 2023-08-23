#include <stdio.h>
int main()
{
    int arr[11] = {9, 7, 6, 5, 8, 3, 4, 1, 2, 33, 44};

    int n = 11;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i=0;i<11;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}