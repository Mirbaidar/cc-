#include<stdio.h>
int  main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
            int totalpairs =0;
            int x=12;
            for (int  i = 0; i <=9; i++)
            {
               for (int j =i+1; j <=9; j++)
               {
                if(arr[i]+arr[j]==x){
                    totalpairs++;
                    printf("%d + %d ==12 \n",arr[i],arr[j]);
                }
               }
            }
                printf("totaal pairs are= %d",totalpairs);           
    return 0;
}
