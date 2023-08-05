#include <stdio.h>
int main()
{
    printf("print the table of two \n");
    int z = 2;
    while (z <= 20)
    {
        printf("%d ", z);
        z = z + 2;
    }
    printf(" \n table of nineteen  \n");
    int y = 19;
    while (y <= 200)
    {
        printf("%d  ", y);
        y = y + 19;
    }

    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n<=(n*10)){
  printf("%d ",n);
        n=n+n;
    }
    return 0;
}