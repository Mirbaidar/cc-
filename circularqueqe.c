#include <stdio.h>
#define maxsize 10
int arr[maxsize];
int rear = -1, front = -1;
void insert();
void delete();
void display();
int main()
{
    printf("\n-----------------circular QUEE--------------------\n");
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
        printf("\nEnter the choice 1-insert 2-display  3-delete 4-exit \n");
        scanf("%d", &choice);
    } while (choice != 4);

    return 0;
}


void insert()
{
    int n;
    if ((rear + 1) % maxsize == front)
    {
        printf("queqe overflow : \n");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            printf("Enter the element : \n");
            scanf("%d", &n);
            front = 0;
            rear = 0;
            arr[rear] = n;
        }
        else
        {
            printf("Enter the element : \n");
            scanf("%d", &n);
            rear = (rear + 1) % maxsize;
            arr[rear] = n;
        }
    }
}



void delete()
{
    int n;
    if (rear == -1 && front == -1)
    {
        printf("the list is empty or underflow \n");
    }
    else
    {
        n = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % maxsize;
        }
        printf("Deleted element : %d \n", n);
    }
}



void display()
{
    if (rear == -1 && front == -1)
    {
        printf("the list is empty :\n");
    }
    else
    {
        printf("Arrray elements : \n");
        for (int i = front; i != rear; i = (i + 1) % maxsize)
        {
            printf("%d    ", arr[i]);
        }
    }
}