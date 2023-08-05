#include <stdio.h>
int main()
{
    int number, rev;
    printf("enter the number");
    scanf("%d", &number);

    while (number > 0)
    {
        rev = number % 10;
        printf("%d", rev);
        number = number / 10;
    }

    return 0;
}