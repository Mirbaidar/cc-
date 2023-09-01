#include<stdio.h>
int main(){
      int n ;
      printf("enter day number from 1 to 7 : ");
      scanf("%d",&n);
       
       switch(n){
        case 1:
         printf("monday");
         break;
          case 2:
         printf("tuesday");
         break;
          case 3:
         printf("wednesdzy");
         break;
          case 4:
         printf("thursday");
         break;
          case 5:
         printf("friday");
         break;
          case 6:
         printf("saturday");
         break;
          case 7:
         printf("sunady");
         break;
         default:
         printf("invalid day number may be greater then 7 or less than 1");

       }
    return 0;
}