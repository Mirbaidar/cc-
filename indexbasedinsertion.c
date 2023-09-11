#include <stdio.h>
int max_element = 10;

int arr[10];

int upper_bond = 5;

void arrayInssrtion(int item, int index)
{
    if (upper_bond == max_element)
    {
        printf("over flow of elements");
    }

    for (int k = upper_bond; k >= index; k--)
    {
        arr[k + 1] = arr[k];
    }
    arr[index] = item;
    upper_bond++;
}
void display()
{
    for (int i = 0; i < upper_bond; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{

    arr[0] = 100;
    arr[1] = 10;
    arr[2] = 170;
    arr[3] = 108;
    arr[4] = 900;

    arrayInssrtion(100, 5);
    arrayInssrtion(10, 3);
    display();
    return 0;
}