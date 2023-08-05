#include<stdio.h>
int main(){
    int arr[2][3]={{1,5,7},{4,9,-10}};
    int min=arr[0][0];
    printf("%d",min);
    int max=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
             max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }

    printf("trhe maximum element in array is %d \n",max);
    printf("trhe manimum element in array is %d",min);
    return 0;
}