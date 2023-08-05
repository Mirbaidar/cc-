#include <stdio.h>
int main()
{
    float distance;
    printf("enter the distance covered in km");
    scanf("%f",&distance);

    float time;
    printf("enter time taken to cover the distane in hours");
    scanf("%f",&time);

    float speed;
    speed = distance / time;
    printf("the speed of vehicle is equal to = %f km/h", speed);

    return 0;
}