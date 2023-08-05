#include <stdio.h>
int main()
{
    int number, d, count = 0;
    printf("enter a number");
    scanf("%d", &number);

    /*if (number == 1 || number == 2)
    {
        printf("it is prime");
    }*/

    for (d = 2; d <= number; d++)
    {
        if (number % d == 0)
        {
            count==1;
        }
    }
    if (count == 1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is composite");
    }
    return 0;
}