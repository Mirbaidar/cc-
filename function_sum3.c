#include <stdio.h>
int calsum(int x, int y, int z);

int main()
{
    int a, b, c, sum;
    printf("enter thwe value of x, y, z");
    scanf("%d %d %d", &a, &b, &c);

    sum = calsum(a, b, c);

    printf("sum is equal to %d", sum);

    return 0;
}

int calsum(int x, int y, int z)
{
    int d = x + y + z;
    return (d);
}