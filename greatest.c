#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the numbers:");
      scanf("%d%d%d",&a,&b,&c);
      if (a>b && a>c){
        printf("a is greatest %d",a);
      }

      if (b>a && b>c){
        printf("b is greatest %d",b);
      }

      if (c>b && c>a){
        printf("c is greatest %d",c);
      }
       return(1);
}