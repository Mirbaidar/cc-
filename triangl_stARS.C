#include<stdio.h>
int main(){
int r,j;
for(r=1;r<=5;r++){
    for(j=1;j<=r;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}