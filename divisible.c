#include <stdio.h>
int main()
{
    int a;
    printf("enter the positive number");
    scanf("%d", &a);
    if(a%3==0 && a%5==0){
        printf("it is divisible by both numbers %d ",a);

    }else{
        printf("it is not divisible by both numbers %d ",a);
    }
}