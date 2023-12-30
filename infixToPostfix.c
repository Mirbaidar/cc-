#include <stdio.h>
#include <conio.h>
int count_factorial(int);
int main()
{
    int fact;
    printf("enter the number : \n");
    scanf("%d", &fact);
    int answer = count_factorial(fact);
    printf("%d", answer);

    return 0;
}
int count_factorial(int fact)
{
    static int num = 1;
    if (fact == 1)
    {
        return num;
    }
    else
    {
        num = num * fact;
        fact--;
        count_factorial(fact);
    }
}