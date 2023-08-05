#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    printf("enter the first number c =");
    scanf("%d", &c);

    int d;
    printf("enter the number  d=");
    scanf("%d", &d);

    int sum = add(c, d);
    printf("the sum of c=%d and d=%d is equal to %d", c, d, sum);

    return 0;
}