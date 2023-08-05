#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
      scanf("%d",&num);
      if(num>99 && num<1000){
        printf("this number lies between three dighit numbers i,e %d",num);
      }else{
        printf("it dosent lie between three dighit numbers ");
      }
      return(0);
}