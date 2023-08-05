#include <stdio.h>
int main()
{
    float qun, dis, price, total;
    printf("enter the quantity and price :");
    scanf("%f%f", &qun, &price);
    if (qun > 1000)
    {
         dis=10;
        total = (qun * price) - (qun * price * dis / 100);
        printf(" after discount the total price is equal to %f", total);
    }
    total = qun*price;
    printf("the total expences are equal to %f",total);

    return (0);
}