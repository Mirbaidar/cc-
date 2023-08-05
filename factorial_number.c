#include <stdio.h>
int main()
{
    int n, fac = 1;
    printf("enter the number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("%d", fac);
    return 0;
}