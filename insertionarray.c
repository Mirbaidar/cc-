#include <stdio.h>

int max_element = 10;
int arr[10];
int up_bond = 0;

void insertion(int inserted_ele)
{
    int enter = inserted_ele;
    if (up_bond == max_element)
    {
        printf("overflow of elements \n ");
    }
    else
    {

        arr[up_bond] = enter;
        up_bond = up_bond + 1;
    }
}

void display()
{
    for (int i = 0; i < up_bond; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    insertion(24);
    insertion(9);
    insertion(32);
    insertion(678);
    insertion(2);

    display();

    return 0;
}