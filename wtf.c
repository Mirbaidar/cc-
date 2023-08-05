#include<stdio.h>
int main(){
    float t, v, wtf;
    printf("enter the value of t and v  => ");
    scanf("%f%f",&t,&v);
    wtf =35.74+0.6215*t+(0.4225*t-35.75)*(v*0.16);
    printf("wtf is equal to %f",wtf);
    return (0);

}