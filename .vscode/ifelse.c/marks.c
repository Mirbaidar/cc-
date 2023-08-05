#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if (marks > 80)
    {
        printf("a grade");
    }
    else if (marks > 60)
    {
        printf("b grade");
    }
    else
    {
        printf("fail");
    }

    return 0;
}