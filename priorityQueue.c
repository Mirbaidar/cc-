#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int data;
    int priority;
    struct node *add;
};
struct node *start = NULL, *new1, *temp, *previous, *next;
void create();
void display();
void dequee();
int main()
{
    create();
    create();
     create();
    create();
     dequee();
    create();
    create();
    display();
    return 0;
}
void create()
{
    int data, priority;
    printf("Enter the data :  ");
    scanf("%d", &data);
    printf("Enter the priority : ");
    scanf("%d", &priority);
    printf("\n");

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = data;
    new1->priority = priority;
    new1->add = NULL;

    if (start == NULL)
    {
        start = new1;
    }
    else if (start->priority > priority)
    {
        new1->add = start;
        start = new1;
    }
    else
    {
        temp = start;
        while (temp->add != NULL && temp->priority < new1->priority)
        {
            previous = temp;
            next = temp->add;
            temp = temp->add;
        }
        previous->add = new1;
        new1->add = next;
    }

    return;
}

void display()
{
    temp = start;
    if (start == NULL)
    {
        printf("the queue is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Data : %d\n", temp->data);
            printf("Priority : %d\n", temp->priority);
            temp = temp->add;
        }
    }
}

void dequee(){
    if(start==NULL){
        printf("the queue is empty \n");
    }else{
        temp=start;
        while(temp->add!=NULL){
            previous=temp;
            temp=temp->add;
        }
        previous->add=NULL;
        printf("Deequed node => priority :%d , data : %d ",temp->priority,temp->data);
    }
}