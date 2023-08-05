#include <stdio.h>
int main()
{
    int n, product = 1, dighit;
    printf("enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        dighit = n % 10;
        product = product * dighit;
        n = n / 10;
    }
    printf("product of numbers: %d", product);
    return 0;
}