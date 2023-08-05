#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
       scanf("%d",&a);
        while(a>1){
            if(a%2 ==0){
                printf("%d a is even \n ",a);
                a=a/2;
            }else{
                printf("%d is odd \n",a);
                a=a*3+1;
            }

        }
        return 0;
}