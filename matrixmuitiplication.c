#include <stdio.h>
int main()
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    int b[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    int res[3][4];

    // multiplication
    int cr = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // i row a[][]and j[][]
            // a[i][0],a[i][1]....and b[0][j].b[1][j]...
            res[i][j] = 0;
            for (int k = 0; k < cr; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}