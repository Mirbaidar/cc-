#include<stdio.h>
void powert(int , int);
int main(){
    int base,power;
    printf("enter the base");
    scanf("%d",&base);
    printf("enter the power");
    scanf("%d",&power);
     powert(base , power);

    return 0;
}

void powert(int base , int power){
    int x;
    if(power==0)return;
    x= base*(base,power-1);
    printf("%d",x);

}