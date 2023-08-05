#include<stdio.h>
typedef int* pointer; 
int main(){
    int x=10, y=13;

    pointer a=&x, b=&y;
   
    printf("%p \n",b);
     printf("%p",a);
    return 0;
}