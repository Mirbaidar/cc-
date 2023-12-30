#include<stdio.h>
#include<conio.h>
int arr[10];
int top =-1;
char ch;
void create();
void display();
int main(){
   create();
   display();
    return 0;
}

void create(){
      int n;
      printf("Enter the element : \n");
      scanf("%d",&n);
      top=top+1;
      arr[top]=n;
     printf("want to continue .press Y or y : ");
     ch=getche();
     while(ch=='y' || ch=='Y'){
      printf("Enter the element : \n");
      scanf("%d",&n);
      top=top+1;
      arr[top]=n;
      printf("want to continue .press Y or y : ");
     ch=getche();
     }
}

void display(){
  if(top==-1){
    printf("The stack is empty \n");
  }else{
    int i=top;
    while(i>=0){
      printf("%d  ",arr[i]);
      i--;
    }
  }
}