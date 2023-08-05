#include <stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if ((num%5) == 0)
    {
        printf("it is divisible by five");
    }
    else
    {
        printf("it is nott divisible by five");
    }

    return (1);
}