#include <stdio.h>
int main()
{
    int num;
    printf("enter ta number :");
     scanf("%d",&num);
    if (num % 3 == 0 || num % 5 == 0)
    {
        if (num % 15 == 0)
        {
            printf("it is divisible by fifteen");
        }
        else
        {
            printf("it is divisible by five or three ");
        }
    }
    else
    {
        printf("it is divisible by five or three ");
    }

    return 0;
}