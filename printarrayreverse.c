#include<stdio.h>
int main(){
    int arr[5] ;
    for(int i=0; i<=5;i++){
        printf("enter the array numbers %d \n",i);
        scanf("%d",&arr[i]);
    }
    for(int i =5;i>=0;i--){
            printf("array elements are %d \n",arr[i]);
        }
        
    return 0;
}