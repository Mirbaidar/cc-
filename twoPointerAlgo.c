#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int i = 0;
    int j = 9;
    int target = 20;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("%d + %d= %d", arr[i], arr[j], target);
            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}