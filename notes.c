#include<stdio.h>
int main(){
    int five, ten, fifty, hundred, n;
    printf("enter the value of n=->");
    scanf("%d",&n);

    five = n/5;
    ten= n/10;
    fifty = n/50;
    hundred = n/100;

printf("the  total no of notes are %d \n",five);
printf("the  total no of notes are %d \n",ten);
printf("the  total no of notes are %d \n",fifty);
printf("the  total no of notes are %d \n",hundred);
    return(0);
}