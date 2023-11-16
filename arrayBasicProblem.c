#include <stdio.h>
int arr[10] = {1, 3, 5, 22, 987, 56, 1, 78, 543, 77};
void fre_OfANum();
void fre_of_array();
int main()
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMinimum : %d \n", min);
    printf("Maximum : %d \n", max);
    fre_OfANum();
    fre_of_array();
    return 0;
}

void fre_OfANum()
{
    int num;
    printf("\nEnter the number to find its frequency : ");
    scanf("%d", &num);
    int count = 0;

    for (int k = 0; k < 10; k++)
    {
        if (num == arr[k])
        {
            count++;
        }
    }
    printf("Number %d : frequecy : %d\n", num, count);
}

void fre_of_array()
{
    int count;
   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {  
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        printf("num %d : frequency %d \n", arr[i], count);
        count=0;
    }
}
