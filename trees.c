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
int ch;
char add;
void create(struct node *r, struct node *n);
void inorder(struct node *p);

int main()
{
    printf("-----------------------TREES-------------------------\n");
    int choice;
    do
    {
        printf("1- Create\n");
        printf("2-inorder\n");
        printf("3-preorder\n");
        printf("4-postorder\n");
        printf("10-Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            
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
            break;

        case 2:
            inorder(root);
            break;
        default:
            printf("unknown choice \n ");
            break;
        }
    } while (ch != 10 );

    return 0;
}

void create(struct node *r, struct node *n)
{
    if (r->data > n->data)
    {
        if (r->left == NULL)
        {
            r->left = new1;
        }
        else
        {
            create(r->left, n);
        }
    }

    if (r->data < new1->data)
    {
        if (r->right == NULL)
        {
            r->right = n;
        }
        else
        {
            create(r->right, n);
        }
    }

    if (n->data == r->data)
    {
        printf("duplicate element \n ");
    }
}

void inorder(struct node *p)
{   printf("Sorted elements in tree using LNR ");
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d     ", p->data);
        inorder(p->right);
    }
}