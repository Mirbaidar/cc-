#include<stdio.h>
int main(){
int n;
printf("enter the value of n");
//we give the memory of array during runtime after compilation
int arr[n];
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}