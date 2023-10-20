#include <stdio.h>
int factorial(int numb);
int reverse(int numb);
int main()
{
    int num;
    printf("enter the number : \n");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Number:%d , factorial:%d \n", num, fact);
    int x = reverse(num);
    printf("The reverse number is : %d \n", x);

    return 0;
}

int factorial(int numb)
{
    static int f = 1;
    int i = 1;
    if (numb == 0)
    {
        return f;
    }
    else
    {
        f = f * numb;
        numb--;
        factorial(numb);
    }
}

int reverse(int numb)
{
    static int rev = 0;
    int dighit;
    if (numb == 0)
    {
        return rev;
    }
    else
    {
        dighit = numb % 10;
        rev = rev * 10 + dighit;
        numb = numb / 10;
        reverse(numb);
    }
}