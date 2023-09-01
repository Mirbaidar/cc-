#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);

    char b;
    scanf("%c", &b);

    int c;
    scanf("%d", &c);
    printf("\n");

    if (b == '+')
    {
        printf("%d + %d = %d", a, c, a + c);
    }
    if (b == '-')
    {
        printf("%d - %d = %d", a, c, a - c);
    }
    if (b == '*')
    {
        printf("%d * %d = %d", a, c, a * c);
    }
    if (b == '/')
    {
        printf("%d / %d = %f", a, c, (float)a/c);
    }

    return 0;
}