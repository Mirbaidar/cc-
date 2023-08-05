#include <stdio.h>
int even(int);

int main()
{

    int count = 1;
    for (int i = 1; i <= (count = 7); i++)
    {

        if (i % 2 == 0)
        {
            count = count + 1;
            printf("number is even %d \n", i);
        }
    }

    return 0;
}
