#include <stdio.h>
int main()
{
    int arr[7] = {0, 1, 3, 0, 5, 0, 2};
    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7-1-i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int o = 0; o < 7; o++)
    {
        printf("%d", arr[o]);
    }
    return 0;
}