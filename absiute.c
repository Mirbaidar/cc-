#include<stdio.h>
int main()
{
    int numb;
    printf("enter the number");
    scanf("%d",&numb);
    if ((numb * -1) == numb)
    {
        printf("it is absol.ute intg"); /* code */
    }
    else
    {
        printf("this is absolute value");
    }
    return (1);
}