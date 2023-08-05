#include<stdio.h>
int main(){
    int b=12;
    int* x=&b;

    printf("%p\n",x);  //PRINTING adress of variable
    printf("%p \n",&x);//PRINTING adress of pointer

    printf("%d\n",*x);//value of variable whose adress is stored in x
    
    *x=19;//we can change the values of variables using pointers i,e *x =---; 
    printf("%d",b);

    return 0;
}