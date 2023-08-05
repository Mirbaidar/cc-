#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int newarr[5];

    for (int i = 0; i <= 4; i++)
    {
       newarr[i]=arr[4-i];
    }

    for (int i = 0; i <= 4; i++)
    {
       printf("%d",newarr[i]);
    }
    return 0;
}