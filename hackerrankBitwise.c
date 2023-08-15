#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function

void calculate_the_maximum(int n, int k){
  int total=0;
  int max1=0 ,max2=0 ,max3=0 ; 
  
  for(int i=1;i<n;i++){

    total += i;

  }
  
 int arr[total][3]; 
 int row=-1;
 
 for(int j=1;j<n;j++){
    for(int l=j+1;l<=n;l++){
           ++row; 
             arr[row][0]=j&l;
             arr[row][1]=j|l;
             arr[row][2]=j^l;
    } 
}
for(int i=0;i<total;i++){
    if(max1 < arr[i][0] && arr[i][0]<k )
        max1 = arr[i][0];
     if(max2 < arr[i][1] && arr[i][1]<k )
        max2 = arr[i][1];
    if(max3 < arr[i][2] && arr[i][2]<k )
        max3 = arr[i][2];        
}
  printf("%d\n%d\n%d", max1 ,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}