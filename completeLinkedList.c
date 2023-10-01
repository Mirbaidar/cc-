#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *adress;
};
struct node *start = NULL, *temp, *newnode, *previous, *next;
char choice;

void create();
void display();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
void linear_search();

int main()
{
    int fun;
    printf("-----------Linkedlist-----------\n");

    do
    {
        printf("......Enter your choice 1-create \n2-insert_first 3-insert_middle   4-insert_last \n5-delete_first 6-delete_middle 7-delete_last \n8-search node \n9-display :....... \n ");
        scanf("%d", &fun);
        switch (fun)
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
            linear_search();
            break;
        case 9:
            display();
            break;
        default:
            printf("you have entered wronng choice \n ");
            break;
        }
    } while (fun != 10);
    return 0;
}

void create()
{
    int n;
    printf("enter the data: ");
    scanf("%d", &n);

    start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->adress = NULL;

    temp = start;

    printf("want to continue press  y :");
    choice = getche();

    while (choice == 'y' || choice == 'Y')
    {
        printf("    Enter the data: \n");
        scanf("%d", &n);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = n;
        newnode->adress = NULL;

        temp->adress = newnode;
        temp = temp->adress;

        printf("Want to continue press  y :");
        choice = getche();
    }
}

void display()
{
    temp = start;
    if (start == NULL)
    {
        printf("LIst is empty");
    }
    else
    {
        printf("____linked list nodes____ \n");

        while (temp != NULL)
        {
            printf("%d   ", temp->data);
            temp = temp->adress;
        }
        printf("\n");
    }
}

void insert_first()
{
    if (temp == NULL)
    {
        printf("list is empty i,e there is no first position \n");
    }
    else
    {
        int j;
        printf("enter the first node data : \n");
        scanf("%d", &j);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = j;
        newnode->adress = NULL;

        newnode->adress = start;
        start = newnode;
    }
}

void insert_last()
{
    int lastele;

    if (start == NULL)
    {
        printf("list is empty :\n");
    }
    else
    {
        printf("enter the last element : \n");
        scanf("%d", &lastele);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = lastele;
        newnode->adress = NULL;

        temp = start;
        while (temp->adress != NULL)
        {

            temp = temp->adress;
        }

        temp->adress = newnode;
    }
}

void insert_middle()
{
    int position;
    temp = start;

    if (start == NULL)
    {
        printf("list is empty : \n");
    }
    else
    {
        printf("Enter the node position to insert  newnode there : \n");
        scanf("%d", &position);

        int datan;
        printf("enter the node data : \n");
        scanf("%d", &datan);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = datan;
        newnode->adress = NULL;

        int i = 1;

        while (i < position)
        {
            previous = temp;
            temp = temp->adress;
            i++;
        }
        previous->adress = newnode;
        newnode->adress = temp;
    }
}

void delete_first()
{

    if (start == NULL)
    {
        printf("list is empty : \n");
    }
    else
    {
        temp = start;
        start = start->adress;
        printf(" First position deleted node data : %d \n", temp->data);
        free(temp);
    }
}

void delete_last()
{

    if (start == NULL)
    {
        printf("list is empty : ");
    }
    else
    {
        temp = start;
        while (temp->adress != NULL)
        {
            previous = temp;
            temp = temp->adress;
        }
        previous->adress = NULL;
        printf("last deleted  node : %d \n ", temp->data);
        free(temp);
    }
}

void delete_middle()
{
    temp = start;
    if (start == NULL)
    {
        printf("list is empty : \n");
    }
    else
    {
        int position;
        printf("enter the node position to delete it : \n");
        scanf("%d", &position);
        int i = 1;
        while (i < position)
        {
            previous = temp;
            temp = temp->adress;
            i++;
        }
        next = temp->adress;
        previous->adress = next;
        printf("Deleted node of position %d , data : %d", position, temp->data);
        free(temp);
    }
}

void linear_search()
{
    int searched_node, found = 0;
    if (start == NULL)
    {
        printf("the list is empty :\n ");
    }
    else
    {
        printf("enter the node to search : \n ");
        scanf("%d", &searched_node);

        temp = start;

        while (temp != NULL)
        {
            if (temp->data == searched_node)
            {
                found = 1;
                break;
            }
            temp = temp->adress;
        }
    }
    if (found == 1)
    {
        printf("the node is inside list : %d \n", searched_node);
    }
    else
    {
        printf("The node does not exist in list : \n");
    }
}
