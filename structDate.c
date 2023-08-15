#include <stdio.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a;
    date b;
    a.day = 12;
    a.month = 6;
    a.year = 2021;
    b.day = 25;
    b.month = 6;
    b.year = 2023;

    bool flag = true;
    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
    {
        printf("the both dates are equal");
    }
    else
    {
        printf("they are not equal ");
    }

    return 0;
}