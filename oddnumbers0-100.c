#include<stdio.h>
int main(){
    printf("odd numbers /n");
    int x =1;
    while(x<=100){
        if(x%2!=0){
         printf("%d  ",x);   
        }
    x++;
    }
    return 0;
}