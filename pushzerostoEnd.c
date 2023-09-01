#include <stdio.h>
int main()
{
    //normal program for an array to push zeros at end 
    int arr[7] = {5, 0, 1, 0, 2, 0, 3};
    
     int ans[7];
     int n = 0;
     for(int i=0;i<7; i++){
        if(arr[i]!=0){
            ans[n] = arr[i];
            n++;
        }

     }
     while(n < 7){
        ans[n]=0;
        n++;
     }
     for(int j=0;j<7;j++){
        printf("%d  ",ans[j]);
     }

    return 0;
}