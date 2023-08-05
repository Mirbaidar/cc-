#include<stdio.h>
int product(int a, int b, int c);
int main(){
    int d,e,f,pro;
   printf("enter the values to multiply :");
        scanf("%d %d %d",&d,&e,&f);
    pro=product(d,e,f);

    printf("product is equal to %d",pro);
    return 0;
}
int product(int a, int b,int c){
    int p=a*b*c;
    return(p);
}