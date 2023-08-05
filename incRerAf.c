#include <stdio.h>
void increasing(int n)
{
    if (n == 0)
        return;
   // increasing(n - 1);
    printf("%d\n ", n);
     increasing(n - 1);
    return;
}
int main()
{
    int num;
    printf("enter thr number");
    scanf("%d", &num);
    increasing(num);
    return 0;
}