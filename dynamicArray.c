#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    int *ptr;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    ptr = (int*)malloc(10*sizeof(int));
    printf("\n");

    for(int i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
    printf("array elements: \n");
    for(int k=0;k<size;k++){
        printf("%d   ",ptr[k]);
    }
    printf("\ndelete first element \n ");

    for(int i=0;i<size;i++){
        ptr[i]=ptr[i+1];
    }
    printf("array elements: \n");
    for(int k=0;k<size;k++){
        printf("%d   ",ptr[k]);
    }
    return 0;
}