#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter the number");
    scanf("%d",&n);

    for(int i=2; i<n;i++){
        if(n%i==0){
           count = count+1;
           break;
        }
    }

    if(count==1){
        printf("number is composite");
    }
    else{
        printf("number is prime");
    }
    return 0;
}