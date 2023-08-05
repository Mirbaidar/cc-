#include <stdio.h>
int main()
{
    int elearray, arr[elearray];
    printf("enter the the size of array :");
    scanf("%d", &elearray);
    for (int i = 0; i < elearray; i++)
    {
        printf("enter thearray  element at index %d =",i);
        scanf("%d", &arr[i]);
    }
    return 0;
}