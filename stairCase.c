#include <stdio.h>

int steps(int stair)
{
    if(stair == 1 || stair ==2) return stair;
    
   // if(stair==2) return 2;

    int t= steps(stair-1) +steps(stair-2);

    return t;
}

int main()
{
    int stair;
    printf("enter the number of stairs :");
    scanf("%d", &stair);

    int x = steps(stair);

    printf("total number of steps %d", x);

    return 0;
}