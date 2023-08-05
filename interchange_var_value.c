#include <stdio.h>
int main()
{
    float x, y,tem;
    printf("enter the value of  these two numbers");
    scanf("%f%f",&x,&y);
    tem =x;
    x=y;
    y=tem;
    printf("the value of x and y is equal to x = %f and y=%f",x,y);

    return(0);
}