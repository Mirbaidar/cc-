#include <stdio.h>
int main()
{
    printf("numbers from one to hundred are =");
   
    for (int num = 1; num <= 100; num++)
    {
       if (num%2==0)
       {
        printf("it is evrn %d \n",num);
       }else{
        printf(" it is odd %d \n",num);
       }
       
    }
    return 0;
}