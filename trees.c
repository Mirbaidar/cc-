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
void preorder(struct node *p);
void postorder(struct node *p);
void nonrecInorder(struct node *p);
void nonrecpreorder(struct node *p);

int main()
{
    printf("-----------------------TREES-------------------------\n");
    int choice;
    do
    {
        printf("\n1- Create\n");
        printf("2-inorder\n");
        printf("3-preorder\n");
        printf("4-postorder\n");
        printf("5-nonrec Inorder\n");
        printf("6-nonrec preorder\n");
        printf("10-Exit\n");
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
                printf("want to continue . press 1:\n");
                scanf("%d", &add);
            } while (add == 1);
            break;

        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            nonrecInorder(root);
            break;
        case 6:
            nonrecpreorder(root);
            break;
        default:
            printf("unknown choice \n ");
            break;
        }
    } while (choice != 10);

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
{

    if (p != NULL)
    {
        // printf("Sorted elements in tree using LNR \n");
        inorder(p->left);
        printf("%d     ", p->data);
        inorder(p->right);
    }
}

void preorder(struct node *p)
{
    if (p != NULL)
    {
        printf("%d   ", p->data);
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(struct node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d  ", p->data);
    }
}

void nonrecInorder(struct node *p)
{
    struct node *s[50];
    struct node *pt;
    pt = p;
    s[0] = NULL;
    int top = 0;
    while (pt != NULL)
    {
        top++;
        s[top] = pt;
        pt = pt->left;
    }
    pt = s[top];
    top--;

    while (pt != NULL)
    {
        printf("%d    ", pt->data);
        if (pt->right != NULL)
        {
            pt = pt->right;
            while (pt != NULL)
            {
                top++;
                s[top] = pt;
                pt = pt->left;
            }
        }
    }
    pt = s[top];
    top--;
}

void nonrecpreorder(struct node *p)
{
    struct node *s[50], *pt;
    int top = 0;
    s[0] = NULL;
    while (pt != NULL)
    {
        printf("%d", pt->data);
        if (pt->right != NULL)
        {
            top++;
            s[top] = pt->right;
        }
        if (pt->left != NULL)
        {
            pt = pt->left;
        }
        else
        {
            pt = s[top];
            top = top - 1;
        }
    }
}