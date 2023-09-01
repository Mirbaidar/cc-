#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    char b;
    scanf("%c", &b);

    int c;
    scanf("%d", &c);

    switch (b)
    {
    case '+':
        printf("%d", a + c);
        break;

    case '%':
        printf("%d", a % c);
        break;

    case '/':
        printf("%d", a / c);
        break;

    case '-':
        printf("%d", a - c);
        break;

    case '*':
        printf("%d", a * c);
        break;

    default:
        printf("invalid operator or  overflow of inputs");
    }

    return 0;
}