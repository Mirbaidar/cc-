#include<stdio.h>
int main(){
    int num;
    printf("enter the number to check its prime factors ");
    scanf("%d",&num);
  int i=1;
    while(i<=num){
        if(num%i==0 && i%2!=0){
            printf("%d,",i);
        }
        i++;
    }
    return 0;
}