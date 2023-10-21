#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *ladd;
    int data;
    struct node *radd;
};

struct node *root = NULL, *new1;
int choice, n;
char ch;

int main()
{
     printf("------------------------------Tree--------------------\n");
        printf("1- create\n");
        printf("2-inorder\n");
        printf("3-preorder\n");
        printf("4-postorder");

        printf("enter the choice : \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element :\n");
            scanf("%d", &n);
            new1 = (struct node *)malloc(sizeof(struct node));
            new1->ladd = new1->radd = NULL;
            new1->data = n;
            
            if (root == NULL)
            {
                root = new1;
            }
            else
            {
                //create(root, new1);
                printf("enter y to continue : \n");
                ch = getche();
            }
        

    return 0;
}