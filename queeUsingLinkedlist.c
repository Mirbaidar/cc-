#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    struct node *add;
    int data;
};
struct node *head = NULL, *new1, *temp, *last;
void insert();
void display();
void delete();
int main()
{
    printf("\n-----------------QUEE--------------------\n");
    int choice;
    printf("Enter the choice 1-insert 2-display  3-delete 4-exit \n");
    scanf("%d", &choice);
    do
    {

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        default:
            printf("you have entered the wrong choice :\n ");
            break;
        }
        printf("Enter the choice 1-insert 2-display  3-delete 4-exit \n");
        scanf("%d", &choice);
    } while (choice != 4);
    return 0;
}
void insert()
{
    int n;
    printf("Enter the data \n:");
    scanf("%d", &n);
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->add = NULL;
        head->data = n;
    }

    temp = head;
    char ch;
    printf("want to continue press y :\n");
    ch = getche();
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the data \n:");
        scanf("%d", &n);
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->add = NULL;
        new1->data = n;

        temp->add = new1;
        temp = temp->add;
        printf("want to continue press y :\n");
        ch = getche();
    }
}

void display()
{
    temp = head;
    if (head == NULL)
    {
        printf("the quee is underflow \n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d     ", temp->data);
            temp = temp->add;
        }
    }
}
void delete()
{
    if (head == NULL)
    {
        printf("the list is empty or underflow :\n ");
    }
    else
    {
        temp = head;
        head = head->add;
        printf(" deleted node : %d  \n", temp->data);
        free(temp);
    }
}