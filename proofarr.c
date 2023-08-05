#include<stdio.h>
int main(){
    
    int arrsize,arr[arrsize],product=1;
    printf("enter the size of array:");
    scanf("%d",&arrsize);

    for (int i = 0; i < arrsize; i++)
    {
       printf("enter the array element with index %d =",i);
    scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("the product of array lements is equal to = %d",product);
    return 0;
}