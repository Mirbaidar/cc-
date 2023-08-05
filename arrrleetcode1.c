#include<stdio.h>
int main(){
    int r;
    printf("enter the number of colulmn :");
    scanf("%d",&r);

    int c;
    printf("enter the number the rows :");
    scanf("%d",&c);

    int arr[c][r];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   printf("\n the array u entered \n");

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
    return 0;
}