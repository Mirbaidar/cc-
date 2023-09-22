#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
char ch;
struct node{
    int data;
    struct node *next;
};
struct node *start,*newone,*temp;

void creation();
void display();

int main(){
    creation();
    display();
    return 0;
}
void creation(){
    int no;
    printf("enter the element: \n");
    scanf("%d",&no);

    start = (struct node*)malloc(sizeof(struct node));
    start->data = no;
    start->next = NULL;
    
    temp = start;

    printf("enter 'y' to create new node : ");
    ch = getche();

    if(ch == 'y' || ch == 'Y'){
        printf("enter the element: \n");
       scanf("%d",&no);
    
        newone = (struct node*)malloc(sizeof(struct node));
        newone->data= no;
        newone->next = NULL;

        temp->next = newone;
        temp = temp->next;

        printf("want to continue :");
        ch=getche();
    }
    
}

void display(){
    temp = start;
  if(start== NULL){
    printf("list is empty");
  }else{
    while(temp  != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
  }
    
}