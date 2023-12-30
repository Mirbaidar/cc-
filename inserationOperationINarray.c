#include <stdio.h>
int arr[10];
int up = 10 - 1;
int place = -1;

void insert();
void display();
void insertany();

int main()
{   printf("-----------------------ARRAY---------------------- \n");
    int choice;
    do
    {   
        printf("enter the choice \n 1-insert, 2-display ,3-insertAtAny: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            insertany();
        case 6:
            break;
        default:
            printf("-----????u have entered wrong choice------ \n");
        }
    } while (choice != 6);

    return 0;
}

void insert()
{
    int ele;
    printf("enter the element \n");
    scanf("%d", &ele);
    place = place + 1;
    arr[place] = ele;
}

void display()
{
    if (place == -1)
    {
        printf("array is empty ???\n");
    }
    else
    {
        for (int i = 0; i <= place; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
}

void insertany()
{
    int ind;
    printf("enter the position at which u wanna enter the element in array :");
    scanf("%d", &ind);

    int elem;
    printf("enter the element \n");
    scanf("%d", &elem);

    for (int j = place; j >= ind; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[ind] = elem;
    place = place+1;
}