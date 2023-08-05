#include<stdio.h>
int main(){
    int r;
    printf("enter trhe number of rows:");
    scanf("%d",&r);

    int c;
    printf("enter trhe number of coiumn:");
    scanf("%d",&c);
    int arr[r][c];
     printf("ENTER THE ARRAY ELEMENTS \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
     }

     printf("THE ARRAY U ENTRERED \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }


    int sum =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum + arr[i][j];
        }
     }

     printf("sum of array is : %d",sum);
    return 0;
}