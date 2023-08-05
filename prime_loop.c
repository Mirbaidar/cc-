#include <stdio.h>
int main()
{
    int n, z = 0;
    printf("enter the number");
    scanf("%d", &n);

    for (int o = 2; o <= n - 1; o++)
    {
        if (n % o == 0)
        {
           
            z = 1;
        }
    }
   if(n==1){
    printf("1 is neither prime nor composite");
   }
   else if (z == 0)
    {
        printf("the number u entered  is prime %d",n);
    }

    else if(z == 1)
    {
        printf("the number u entered is composite %d",n);
    }
    return 0;
}