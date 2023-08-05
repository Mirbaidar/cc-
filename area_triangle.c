#include <stdio.h>
int main()
{
    float b, h, area;
    printf("enter the height and base of triangle");
    scanf("%f%f", &b, &h);
    area = 0.5 * b * h;
    printf("area is equal to = %f", area);
    return (0);
}