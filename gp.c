#include<stdio.h>
int main(){
    int a=1,n;

    printf("enter the number");
        scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a=a*2;
    }    
    return 0;
}