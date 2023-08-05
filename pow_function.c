#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int p;
    printf("enter its poer =");
    scanf("%d", &p);

    int power = pow(n, p);
    printf(" numer = %d \n power = %d \n therefore, it  is equal to :->%d", n, p, power);
    return 0;
}