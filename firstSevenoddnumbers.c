#include <stdio.h>

int factors(int num1, int num2);

int main()
{
    int num1, num2;

    printf("enter the first number");
    scanf("%d", &num1);

    printf("enter the first number");
    scanf("%d", &num2);

    factors(num1, num2);

    return 0;
}

int factors(int num1, int num2)
{
    int hcf;
    for (int i = 2; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);
}