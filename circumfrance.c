#include <stdio.h>
int main()
{
    int num;
    printf("enter the integer number");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("it is divisible by seven");
    }
    else
    {
        printf("invalid value for seven");
    }
    return (0);
}