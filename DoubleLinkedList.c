#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct dnode
{
    struct dnode *ladd;
    int data;
    struct dnode *radd;
};
struct dnode *start = NULL, *temp, *new1;
char choice;

void create();
void display();
void display_reverse();
int main()
{
    int funSle;
    printf("------------Double Linked List ------------");
    do
    {
        printf("Enter your choice \n1-create  \n2-display \n3-void display_reverse \n4-Exit \n");
        scanf("%d", &funSle);

        switch (funSle)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
             display_reverse();
            break;
        default:
            printf("well u have exited the program : \n");
            break;
        }
    } while (funSle != 4);

    return 0;
}

void create()
{

    int n;
    printf("enter the new node data : \n");
    scanf("%d", &n);

    start = (struct dnode *)malloc(sizeof(struct dnode));
    start->ladd = start->radd = NULL;
    start->data = n;

    printf("enter y to continue : \n");
    choice = getche();

    temp = start;
    while (choice == 'y' || choice == 'Y')
    {
        printf("enter the new node data : \n");
        scanf("%d", &n);

        new1 = (struct dnode *)malloc(sizeof(struct dnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        temp->radd = new1;
        new1->ladd = temp;
        temp = temp->radd;
        printf("enter y to continue : \n");
        choice = getche();
    }
}

void display()
{
    if (start == NULL)
    {
        printf("the list is empty : \n");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d   ", temp->data);
            temp = temp->radd;
        }
    }
}

void display_reverse()
{
    if (start == NULL)
    {
        printf("list is enmpty : \n");
    }
    else
    {
        temp = start;
        while (temp->radd != NULL)
        {
            temp = temp->radd;
        }

        while (temp != NULL)
        {
            printf("%d  ", temp->data);
            temp = temp->ladd;
        }
    }
}
