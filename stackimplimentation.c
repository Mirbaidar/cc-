#include <stdio.h>
#include <conio.h>
int m = 10;
int arr[10];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;

    do
    {
        printf("Enter your choice -- 1-push, 2-pop, 3-display, 4-exit:->\n");
        scanf("%d", &choice);

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
            printf("\n------you have entered wrong choice------");
            break;
        }
    } while (choice != 4);

    return 0;
}

void push()
{
    int n;
    if (top == m - 1)
    {
        printf("Overflow of elements . further elements ar not allowed to enter :");
    }
    else
    {
        printf("\nenter the element:");
        scanf("%d", &n);

        top = top + 1;
        arr[top] = n;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n underflow  . stack    is empty");
    }
    else
    {
        int poped = arr[top];
        top = top - 1;
        printf("poped element:%d \n", poped);
    }
}

void display()
{
   if(top == -1){
    printf("-----????the stack is empty \n----");
   }else{
    printf("the array elements are here :\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d  ", arr[i]);
    }
   }
   
    printf("\n");
}