#include <stdio.h>

int factorial(int n);


int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);

     int x= factorial(n);

     printf("the factorial is equal to %d",x);
   // printf("%d", x);
    return 0;
}


int factorial(int n)
{
    if(n<=1) return 1;
    
 
    return n* factorial(n-1);
    

}
