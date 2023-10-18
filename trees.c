#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct tree
{
    struct tree *left;
    int data;
    struct tree *right;
};
struct tree *root, *newone, *temp;
void create();
void display();
int main()
{
 create();
 display();
    return 0;
}
void create()
{
    int n;
    printf("Enter the data\n");
    scanf("%d", &n);

    root = (struct tree *)malloc(sizeof(struct tree));
    root->left = NULL;
    root->left = NULL;
    root->data = n;

    char ch;
    printf("Enter y to continue : \n");
    ch = getche();

    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the data\n");
        scanf("%d", &n);
        newone = (struct tree *)malloc(sizeof(struct tree));
        newone->left = NULL;
        newone->left = NULL;
        newone->data = n;

        temp = root;

        if (newone->data > temp->data)
        {
            temp->right = newone;
        }
        else
        {
            temp->left = newone;
        }
        printf("Enter y to continue : \n");
        ch = getche();
    }
}

void display(){
    temp= root;
    while(temp->left != NULL){
        printf("%d",temp->data);
        temp=temp->left;
    }
    temp= root;
    while(temp->right != NULL){
        printf("%d",temp->data);
        temp=temp->right;
    }

}