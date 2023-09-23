#include <stdio.h>
#include <conio.h>
#define max 10;
int arr[10];
int top =-1;

void push();
void pop();
void display();

int main(){
int choice;

do{
printf("Enter your choice -- 1-push, 2-pop, 3-display, 4-exit:->\n");
scanf("%d",&choice);

switch (choice)
{
case 1: push();break;
case 2:pop();break;
case 3:display();break;    
default:printf("\n------you have entered wrong choice------");
    break;
}
}while(choice != 4);

return 0;  
}

void push(){
    int n ;
    printf("\nenter the element:");
    scanf("%d",&n);

    top = top + 1;
    arr[top] = n;
}

void pop(){
    int poped = arr[top];
    top = top - 1;
    printf("poped element:%d \n",poped);
}

void display(){

    printf("the array elements are here :\n");
    for(int i=0;i<=top;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}