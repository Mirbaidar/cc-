#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    struct node *add;
    int data;
};
struct node *top = NULL, *new1, *temp;
void push();
void display();
void pop();
int main()
{
    int choice;
    printf("\n--------------------stack-----------------\n");
    printf("Enter the choice \n1-push \n2-pop \n3-display \n4-exit\n");
    scanf("%d", &choice);
    do
    {
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("you have entered wrong choice \n");
            break;
        }
        printf("\nEnter the choice \n1-push \n2-pop \n3-display \n4-exit\n");
        scanf("%d", &choice);
    } while (choice != 4);
    return 0;
}

void push()
{
    int n;
    printf("enter the data :\n");
    scanf("%d", &n);
    top = (struct node *)malloc(sizeof(struct node));
    top->data = n;
    top->add = NULL;
    temp = top;

    char ch;
    printf("press y to continue :");
    ch = getche();

    while (ch == 'y' || ch == 'Y')
    {
        printf("\nenter the data :\n");
        scanf("%d", &n);

        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->add = NULL;

        new1->add = temp;
        temp = new1;
        top = new1;
        printf("press y to continue :\n");
        ch = getche();
    }
}

void display()
{
    if (top == NULL)
    {
        printf("there is no stack");
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d   ", temp->data);
            temp = temp->add;
        }
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("there is no stack");
    }
    else
    {
        temp = top;
        top = top->add;
        printf("the deleted node is : %d\n", temp->data);
        free(temp);
    }
}