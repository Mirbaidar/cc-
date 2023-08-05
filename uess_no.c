#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    while (n > 1)
    {

        if (n % 2 == 0)
        {
            n = n / 2;
            printf("%d \n", n);
        }
        else
        {
            n = n * 3 + 1;
            printf("%d \n", n);
        }
    }
    return 0;
}