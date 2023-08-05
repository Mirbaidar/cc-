#include<stdio.h>
int main(){
    int arr[3][3];
    printf("enter the array elements 3    --   3 \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int irr[3][3];
    printf("enter the array of secound element 3    ----3 \n");
    for(int c=0;c<3;c++){
        for(int d=0;d<3;d++){
            scanf("%d",&irr[c][d]);
        }
    }

     for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            printf("%d ",arr[a][b]);
        }
        printf("\n");
    }
printf("\n");
  for(int e=0;e<3;e++){
    for(int f=0;f<3;f++){
        printf("%d ",irr[e][f]);
    }
    printf("\n");
  }
printf("\n");
int sum[3][3];
for(int u=0;u<3;u++){
   for(int v=0;v<3;v++){
    sum[u][v]=arr[u][v] +irr[u][v];
   }
}
printf("sum of matrix is equal to: \n ");
for(int n=0;n<3;n++){
    for(int m=0;m<3;m++){
        printf("%d ",sum[n][m]);
    }
    printf("\n ");
}
    return 0;
}