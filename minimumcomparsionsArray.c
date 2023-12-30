#include <stdio.h>
int main()
{
    int arr[8] = {8, 3, 5, 2, 6, 9, 10, 7};

    int lrg[4];
    int small[4];

    int i = 0;
    int j = 1;

    while (i < 8)
    {
        if (arr[i] < arr[j])
        {
            small[i] = arr[i];
        }
        else
        {
            lrg[i] = arr[i];
        }
        i = i + 2;
        j = j + 2;
    }
    for(int i =0; i<4;i++){
        printf("%d",small[i]);
    }
    return 0;
}