#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[50];
    int n, s, false=0;
    
    printf("enter the limit of elements : ");
    scanf("%d", &n);
    printf("\n enter the n number of elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sorting elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("enter the element for search :");
    scanf("%d", &s);
int low=0;
int high=n-1;
int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("middle value :%d\n",arr[mid]);
        if (arr[mid] == s)
        {
            //printf("\nElement found :");
            false=1;
            break;
        }
        else if (s > mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
if(false==1){
    printf("element found :\n");
}else{
    printf("element not found");
}
    return 0;
}