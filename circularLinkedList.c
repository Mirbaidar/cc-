#include <stdio.h>
#include <stdlib.h>
struct cdnode
{
    struct cdnode *ladd;
    int data;
    struct cdnode *radd;
};
char ch;
struct cdnode *start, *new1, *temp;
void create();
void display();
int main()
{
 printf("-----------------CIRCULAR DOUBLE LINKED LIST-------------------\n");
    int choice;
    printf("Enter the choice \n ");
    printf("1-create \n10--display \n13-exit");
    scanf("%d",&choice);
while(choice != 13){
    switch (choice)
    {
    case 1:
        create();
        break;
    case 10 :
         display();
         break;    
    
    default:
    printf("unmatched choice");
        break;
    }
    printf("Enter the choice \n ");
    printf("1-create \n10--display \n13-exit");
    scanf("%d",&choice);
}
    return 0;
}
void create()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    start = (struct cdnode *)malloc(sizeof(struct cdnode));
    start->ladd = start->radd = NULL;
    start->data = n;

    start->ladd = start;
    start->radd = start;

    temp = start;
    printf("Enter y to continue : \n");
    ch = getche();

    while (ch == 'y')
    {
        printf("Enter the number: \n");
        scanf("%d", &n);

        new1 = (struct cdnode *)malloc(sizeof(struct cdnode));
        new1->ladd = new1->radd = NULL;
        new1->data = n;

        temp->radd = new1;
        new1->ladd = temp;
        temp = temp->radd;

        start->ladd = new1;
        new1->radd = start;
    }
}

void display(){
    temp= start;

    if(start==NULL){
        printf("The list is empty : \n");

    }else{
        printf("The circular linked list nodes \n ");
        do{
            printf("%d  ",temp->data);
            temp = temp->radd;
        }while(temp != start);
    }
}