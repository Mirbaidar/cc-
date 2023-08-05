#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the three numbers x y z");
       scanf("%d%d%d",&x,&y,&z);

    if(x>y && x>z){
        printf("x is greatest");
    }else if (y>x && y>z)
    {
        printf("y is greatest");
    }else if(z>y && z>x){
        printf("z is greatest");
    }else{
        printf("enter the valid numbers");
    }
    return 0;
}