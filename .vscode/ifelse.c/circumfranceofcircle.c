#include <stdio.h>
int main()
{
    float diameter, area;
    printf("enter the diameter iof circle =");
    scanf("%f", &diameter);

    area = (3.14 * diameter * diameter) / 4;
    printf("area of circle is equal to = %f cm square", area);

    return 0;
}