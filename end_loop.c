#include <stdio.h>

int main()
{
    int x, y, z;
    printf("enter the the value of x, y and z");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("x is greatest %d", x);
    }
    else
    {
        if (y > x && y > z)
        {
            printf("y is greatest %d", y);
        }
        else
        {
            printf("z is greateszt %d", z);
        }
    }

    return 0;
}