#include <stdio.h>
int max = 0;
void push(int arr[],int a){
    max +=1;
    arr[max]=a;
}
void pop(int arr[]){
   max = max - 1; 
  arr[max] = 0;
}
int main()
{
    int arr[10];
    push(arr,11);
    push(arr,12);
    push(arr,13);
    pop(arr);
    
    for(int i=0;i<= max;i++){
        printf("position : arr[%d] = %d \n",i,arr[i]);
    }

    return 0;
}