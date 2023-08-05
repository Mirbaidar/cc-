#include <stdio.h>
void reverse(int arr[], int startingindex, int endingindex)
{
    for (int i = startingindex, j = endingindex; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr, 0, 6);

    for (int i = 0; i < 8; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}