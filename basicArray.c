#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element number: %d",i);
        scanf("%d",&arr[i]);
        printf("%d",arr[1]);
    }
    
    return 0;
}