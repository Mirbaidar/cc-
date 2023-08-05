#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    bool flag = false;
    printf("enter the number to check its presence in array:");
    scanf("%d", &n);
    int arr[7] = {1, 2, 3, 4, 5, 6, 9};

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == n)
        {
            printf(" element %d is present in arry at index %d", n, i);
           flag = true;
            break;
        }
    }
    if (flag==false)
    {
        printf("element i,e %d is not present in array  ", n);
    }
    return 0;
}