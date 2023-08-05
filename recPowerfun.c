#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    if (b == 0)
    {
        return 1;
    }
    int x = powerlog(a, b / 2);

    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}

int main()
{
    int a;
    printf("enter thr base :");
    scanf("%d", &a);
    int b;
    printf("enter the exponent");
    scanf("%d", &b);

    int p = powerlog(a, b);
    printf("power is equal to :%d", p);

    return 0;
}