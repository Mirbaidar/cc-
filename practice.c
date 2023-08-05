#include<stdio.h>
int main(){
   int bs;
   printf("enter the bs");
   scanf("%d",&bs);
  int hra, da, gs;

  if(bs<1500){
    hra=bs*10/100;
    da= bs*90/100;
  }else{
    hra=500;
    da= bs*98/100;
  }
  gs= bs+hra+da;
  printf("your gross salary is equal to %d",gs);




    return 0;
}