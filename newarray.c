#include <stdio.h>
int arr[5];
void input();
void sum();
void even_odd();
int main()
{
    input();
    sum();
    even_odd();
    return 0;
}
void input()
{
    printf("enter the array elements : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
}

void sum()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("aum of array : %d \n", sum);
}

void even_odd()
{
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            even_sum = even_sum + arr[i];
        }
        if (i != 0 && i % 2 != 0)
        {
            odd_sum = odd_sum + arr[i];
        }
    }

    printf("even- odd %d- %d = %d", even_sum, odd_sum, even_sum - odd_sum);
}