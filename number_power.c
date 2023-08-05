#include <stdio.h>
int pom(int x, int y);
int main()
{
    int a, b, power ;
    printf("enter the base");
    scanf("%d", &a);
    printf("enter the exponent");
    scanf("%d", &b);

     power=pom(a,b);
     printf("the number with base %d and power %d is equal to %d",a,b,power);



    /*for (int i = 1; i <= b; i++)
    {
        power = power * a;
        printf("with base %d and exponent %d power is equal to %d \n", a, i, power);
    }
    // printf("power is equal to %d", power);*/



    return 0;
}

int pom(int x, int y)
{
    int ppower = 1;
    for (int i = 1; i <= y; i++)
    { 
        
        ppower = ppower * x;
        
    }
    return ppower;
}