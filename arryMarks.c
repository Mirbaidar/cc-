#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i <= 5; i++)
    {
        printf("enter the marks of class %d : ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] <= 31)
        {
            printf("roll no of person who had failed examination : %d \n", i);
        }
    }
    return 0;
}