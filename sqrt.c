#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);
    int root = sqrt(a);
    printf("the root of number %d is equal to %d", a, root);
    return 0;
}