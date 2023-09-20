#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *newnode, *temp;

char ch;

void create();
void display();
void insertATFirstPosition();

int main()
{
    create();//function for creating the linked list with multiple nodes
    insertATFirstPosition();//used to insert element at first position in list
    display();//this function is for travesal i,e to print the data of list alspo known as teaversing of list
    return 0;
}

void create()
{
    int n;
    printf("enter the element : ");
    scanf("%d", &n);

    start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->add = NULL;
    temp = start;

    printf("\n want to continue then enter y:");
   ch =getche();

    while (ch == 'y' || ch == 'Y')
    {
        printf(" \n enter the data :");
        scanf("%d", &n);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = n;
        newnode->add = NULL;

        temp->add = newnode;
        temp = temp->add;

        printf(" \n want ro continue enter y: ");
        ch = getche();
    }
}

void display()
{

    if (start == NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf(" \n The nodes of our list are as under : \n");
        temp = start;

        while (temp != NULL)
        {
            printf("%d  ",temp->data);
            temp = temp->add;
        }
    }
}

void insertATFirstPosition(){
    int j;
    if(start == NULL){
        printf("the list is emppty ");
    }else{
        printf(" \n enter the node at place it at first positon : \n");
        scanf("%d",&j);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = j;
        newnode->add = NULL;

        newnode->add= start;
        start = newnode;
    }
}