#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL, *new1;
int n;
char ch;
void create(struct node *r, struct node *n);

int main()
{
    printf("-----------------------TREES-------------------------\n");
    int choice;
    printf("1- Create\n");
    printf("2-inorder\n");
    printf("3-preorder\n");
    printf("4-postorder\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        do
        {
            printf("Enter the data : \n");
            scanf("%d", &n);
            new1 = (struct node *)malloc(sizeof(struct node));
            new1->left = new1->right = NULL;
            new1->data = n;
            if (root == NULL)
            {
                root = new1;
            }
            else
            {
                create(root, new1);
            }
            printf("Want to continue .press 'y' or 'Y': \n");
            ch = getche();
        } while (ch == 'Y' || ch == 'y');
        break;

    default:
        printf("unknown choice \n ");
        break;
    }
    return 0;
}

void create(struct node *r, struct node *n)
{
}