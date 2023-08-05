#include <stdio.h>
int main()
{
    int arr[4][4] = {{1, 2, 7, 3},
                     {4, 1, 5, 6},
                     {2,4,7,1,},
                     {2,2,2,2}
                     };

    int maxcount = 0;
    int maxrow=-1;

    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 2)
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            maxrow = i;
        }
    }

    printf("maxcount is equal to %d, index %d", maxcount,maxrow);
    return 0;
}