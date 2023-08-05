#include<stdio.h>
int main(){
    int a=3,n;
    printf("en ter the number= ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
     printf("%d  ",a);
     a=a*4;
    }
    return 0;
}