#include <stdio.h>
int main()
{
    int num, dighit, sum;
    sum = 0;
    printf("enter the number");
    scanf("%d", &num);

    while (num != 0)
    {
        dighit = num % 10;
        sum = sum + dighit;
        num = num / 10;
    }
    printf("sum of dighits is equal to= %d", sum);
    return 0;
}

// int percentage(int a, int b, int c, int d, int e);

// int main()
/*{
    int math, sst, science, urdu, english, per;
    printf("enter your marks subject wise math,sst,science,urdu,english :");
    scanf("%d%d%d%d%d", &math, &sst, &science, &urdu, &english);
    per = percentage(math, sst, science, urdu, english);
    printf("your percentage is =%d ",per);
    return 0;
}
int percentage(int a, int b, int c, int d, int e)
{
    int  f = a+b+c+d+e/500*100;

    return f;
}*/