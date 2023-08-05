#include<stdio.h>
int main(){
    int num;
printf("enter a five dighit number");
scanf("%d",&num);
int product=1;

for(int i=1;num>0;i++){
    int dighit=num%10;
    printf("%d",dighit);
    num=num/10;
}


printf("sum is equal to %d",product);
    return 0;
}