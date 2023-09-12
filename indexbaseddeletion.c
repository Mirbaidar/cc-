#include <stdio.h>
int upper_bond = 4;

void index_deletion(int arr[6], int ind, int up_ele)
{
    for (int k = ind; k <= up_ele - 1; k++)
    {
        arr[k] = arr[k + 1];
    }
    upper_bond--;
}

void display(int arr[6]){
    for(int i=0;i<=upper_bond;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[6];
    
    arr[0] = 12;
    arr[1] = 13;
    arr[2] = 14;
    arr[3] = 15;
    arr[4] = 35;

    int position = 2;

    index_deletion(arr, 3,upper_bond );
    display(arr);
    return 0;
}
