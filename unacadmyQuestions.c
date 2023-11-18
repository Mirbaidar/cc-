#include <stdio.h>
int main()
{
    printf("......................question 1................\n");
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("1");
    case 2:
        printf("2");
    case 3:
        printf("3");
        break;

    default:
        printf("default");
    }
    printf("\n......................question 2................\n");
    char i = 'a';
    char j = 'b';
    printf("\n%d", j - i);

    printf("\n......................question 3................\n");
    int a[4] = {1, 2};
    printf("\n%d", sizeof(a));
    printf("%d", sizeof(a) / sizeof(int));

    printf("\n......................question 4................\n");
    int k;
    int x[4] = {7};
    for (int k= 0;  k< 4; k++)
    {
        printf("%d  ", x[k]);
    }
    return 0;
}