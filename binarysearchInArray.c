#include <stdio.h>
int binarySearch(int arr[], int, int, int);
int main()
{
    int n;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    int arr[n];

    printf("enter the sorted elements in array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int lower_bond = 0;
    int upper_bond = n - 1;
    int element;
    printf("enter the element to find :");
    scanf("%d",&element);

   int got =  binarySearch(arr, lower_bond, upper_bond, element);
   printf("here the element location is %d",got);
    return 0;
}

int binarySearch(int arr[], int low, int high, int ele)
{
    int mid = low + high / 2;

    while (arr[mid] != ele && low <= high)
    {

        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = high + low / 2;
    }
    if (arr[mid] == ele)
    {
        return mid;
    }
    else
    {
        return low - 1;
    }
}
