#include <stdio.h>

int swap(int *x, int *y);

int main()
{
    int a;
    printf("enter the first value");
    scanf("%d", &a);

    int b;
    printf("enter the second value");
    scanf("%d", &b);

    swap(&a, &b);
  //   printf("values are first number =%d \n", a);
    //printf("values are  second number =%d ", b);
    return 0;
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("values are first number =%d \n", *x);
    printf("values are  second number =%d ", *y);

    return 0;
}