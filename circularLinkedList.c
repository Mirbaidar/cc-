#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct cnode
{
    struct cnode *ladd;
    int data;
    struct cnode *radd;
};
struct cnode *start, *temp, *new1, *last, *previous, *next;
char ch;

void create();        // creates the circular linked list
void insert_first();  // inserts node at first position
void display();       // displays the list
void insert_middle(); // inserts the node at middle
void insert_last();   // inserts node atlast position
void delete_first();  // deletes node at first position
void delete_last();   // deletes node at last position
void delete_middle(); // deletes node at middle position

int main()
{
    printf("\n------------------CIRCULAR DOUBLE LINKED LIST--------------\n");
    int choice;
    printf("\nEnter the choice \n1-create \n2-insert first \n3-insert middle \n4-insert last \n5-delete-first \n6-delete middle \n7-delete last \n8-display \n15-Exit\n ");
    scanf("%d", &choice);
    do
    {
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert_first();
            break;
        case 3:
            insert_middle();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            delete_first();
            break;
        case 6:
            delete_middle();
            break;
        case 7:
            delete_last();
            break;
        case 8:
            display();
            break;
        default:
            printf("\nENTER THE RIGHT CHOICE \n");
            break;
        }

        printf("Enter the choice \n1-create \n2-insert first \n3-insert middle \n4-insert last \n5-delete-first \n6-delete middle \n7-delete last \n8-display \n15-Exit\n ");
        scanf("%d", &choice);
    } while (choice != 15);

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
        printf("\nThe circular doubleLinkedlist nodes are : \n");
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
        printf("\nEnter the position of node :  \n");
        scanf("%d", &pos);
        printf("Enter the  node data: \n");
        scanf("%d", &n);

        new1 = (struct cnode *)malloc(sizeof(struct cnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        int i = 1;
        while (i < pos)
        {
            temp = temp->radd; // node after previous
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
        printf("\nEnter the last node data : \n");
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

void delete_first()
{

    if (start == NULL)
    {
        printf("the list has not been created :\n");
    }
    else
    {
        temp = start;
        last = temp->ladd;

        start = start->radd;
        start->ladd = last;
        last->radd = start;
        printf("\nThe first deleted node : %d\n", temp->data);
        free(temp);
    }
}

void delete_last()
{
    if (start == NULL)
    {
        printf("the list is empty : \n");
    }
    else
    {
        temp = start;          // first node
        last = temp->ladd;     // last node
        previous = last->ladd; // node before last node

        previous->radd = start;
        start->ladd = previous;
        printf("\nthe last deleted node is : %d\n", last->data);
        free(last);
    }
}

void delete_middle()
{
    temp = start;
    if (start == NULL)
    {
        printf("the list is empty : \n");
    }
    else
    {
        int pos;
        printf("\nEnter the node positiion to delete : \n");
        scanf("%d", &pos);

        int i = 1;
        while (i < pos)
        {
            temp = temp->radd;
            i++;
        }
        previous = temp->ladd;
        next = temp->radd;

        previous->radd = next;
        next->ladd = previous;

        printf("\nThe middle deleted node is : %d \n", temp->data);
        free(temp);
    }
}