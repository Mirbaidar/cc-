#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct cnode
{
    struct cnode *ladd;
    int data;
    struct cnode *radd;
};
struct cnode *start, *temp, *new1, *last, *previous;
char ch;
void create();
void insert_first();
void display();
void insert_middle();
void insert_last();
int main()
{
    create();
    insert_first();
    display();
    insert_middle();
    display();
    insert_last();
    display();
    return 0;
}

void create()
{
    int n;
    printf("enter the data : \n");
    scanf("%d", &n);

    start = (struct cnode *)malloc(sizeof(struct cnode));
    start->ladd = start->radd = NULL;
    start->data = n;

    temp = start;
    temp->ladd = start;
    temp->radd = start;

    printf("want to continue press 'y' : ");
    ch = getche();
    while (ch == 'y' || ch == 'Y')
    {
        printf("\nEnter the data : \n");
        scanf("%d", &n);
        new1 = (struct cnode *)malloc(sizeof(struct cnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        temp->radd = new1;
        new1->ladd = temp;
        temp = temp->radd;

        start->ladd = new1;
        new1->radd = start;
        printf("want to continue press 'y' : ");
        ch = getche();
    }
}

void display()
{
    temp = start;
    if (start == NULL)
    {
        printf("the list is empty : \n ");
    }
    else
    {
        do
        {
            printf("%d   ", temp->data);
            temp = temp->radd;
        } while (temp != start);
    }
}

void insert_first()
{

    int n;
    if (start == NULL)
    {
        printf("the list is empty : \n ");
    }
    else
    {
        printf("\nEnter the node at first position : \n");
        scanf("%d", &n);

        new1 = (struct cnode *)malloc(sizeof(struct cnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        temp = start;      // pointer at first node
        last = temp->ladd; // pointer at last node

        new1->radd = start;
        start->ladd = new1;
        start = new1;

        new1->ladd = last;
        last->radd = new1;
    }
}

void insert_middle()
{
    temp = start;
    int n, pos;
    if (start == NULL)
    {
        printf("the list os empty \n");
    }
    else
    {
        printf("enter the position of node : \n");
        scanf("%d", &pos);
        printf("enter the  node data: \n");
        scanf("%d", &n);

        new1 = (struct cnode *)malloc(sizeof(struct cnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        int i = 1;
        while (i < pos)
        {
            temp = temp->radd;
            i++;
        }

        previous = temp->ladd; // previous node

        previous->radd = new1;
        new1->ladd = previous;
        new1->radd = temp;
        temp->ladd = new1;
    }
}
void insert_last()
{
    int n;
    temp = start;
    if (start == NULL)
    {
        printf("the list is empty ; \n");
    }
    else
    {
        printf("Enter the last node data : \n");
        scanf("%d", &n);
        new1 = (struct cnode *)malloc(sizeof(struct cnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        last = temp->ladd;
        last->radd = new1;
        new1->ladd = last;

        new1->radd = start;
        start->ladd = new1;
    }
}