#include <stdio.h>
void message();
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);

    if (a < 100 && a > 0)
    {
        printf("a is in the function %d", a);

        
    }

    message();
    printf("how wre u \n");
    return 0;
}

void message()
{
    printf("what is your name \n");
    printf("where are u know \n");
    printf("what are u doing \n");
}