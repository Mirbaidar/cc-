#include<stdio.h>
void increasing(int,int );

int main(){
    int number;
    printf("enter trhe number");
        scanf("%d",&number);

        increasing(1,number);
    return 0;
}

void increasing(int y,int x){
    
      if(y>x)return;

        printf("%d \n",y);
        increasing(y+1,x);
      
      return;
}