#include<stdio.h>
 void sum (int numb,int summ);
int main(){
    int numb;
    printf("enter thr number = ");
    scanf("%d",&numb);
    sum(numb,0);
    return 0;
}

void sum(numb,summ){
   if(numb==0){
printf("%d",summ);
   }
   sum(numb-1,summ+numb);
   return;
}