#include <stdio.h>
void decreasing(int num);

int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);

    decreasing(num );
    return 0;
}

void decreasing(int num)

{
    if (num == 0)
    {
        return;
    }
    else
    {
        
        printf("%d \n", num);
        decreasing(num-1);
    }
    return;
}





