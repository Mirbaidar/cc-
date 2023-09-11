#include<stdio.h>
int upper_bond = 4;

int arr[10];

void deleation(){
    if(upper_bond < 0){
        printf("underflow");
    }
    upper_bond--;
}

void display(){
    for(int i=0;i<=upper_bond;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
   arr[0]=11;
   arr[1]=12;
   arr[2]=13;
   arr[3]=14;
   arr[4]=5;

   
   deleation();
   deleation();
  
  
   display();
    return 0;
}