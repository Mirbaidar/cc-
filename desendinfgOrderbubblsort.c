#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10] = {9, 4, 5, 1, 6, 7, 8, 10, 22};
    int i = 0;
    int n = 9;

    for (int g = 0; g < n; g++)
    {
        printf("%d  ", arr[g]);
    }

    for (int i = 0; i < n; i++)
    {
        bool hope = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                hope = false;
            }
            if (hope == false)
            {
                break;
            }
        }
    }

    printf("\n");
    for (int g = 0; g < n; g++)
    {
        printf("%d  ", arr[g]);
    }
    return 0;
}