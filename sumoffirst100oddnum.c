#include <stdio.h>
int main()
{
    int num, sum;
    sum = 0;
    while (num <=100)
    {
        if (num % 2 != 0)
        {
            printf("%d   ", num);
        }
        sum = sum + num;
        num++;
    }
    printf("\nsum of first 100 odd numbers is equal to = %d", sum);
    return 0;
}