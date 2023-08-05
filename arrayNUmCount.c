#include <stdio.h>
int main()
{
    int num, x = 0;
    printf("enter the number to check your position=");
    scanf("%d", &num);
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > num)
        {
            x += 1;
        }
    }
    printf("count of array elements greater then num are %d", x);

    return 0;
}