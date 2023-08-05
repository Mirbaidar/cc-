#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    bool flag = true;
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a, b;

    // a data;
    a.day = 19;
    a.month = 4;
    a.year = 2023;

    // b data
    b.day = 22;
    b.month = 11;
    b.year = 2004;

    if (a.day == b.day)
    {
        printf("they are equal to eachother");
    }
    else
    {
        printf("they are different i.e, a.day and b.day ");
    }
    date c;
    c = a;

    if (c.day != a.day)
        flag = false;
    if (c.month != a.month)
        flag = false;
    if (c.year != a.year)
        flag = false;

    if (flag == false)
    {
        printf("they both are not equal to eachother");
    }
    else
    {
        printf(" \n they both have same capabilities and are equal ");
    }
    return 0;
}