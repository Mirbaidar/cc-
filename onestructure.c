#include <stdio.h>
#include <string.h>

int main()
{
    struct book
    {
        char name[22];
        float price;
        int numberOfPages;
    }physics,math,evs;
   // struct book physics;
    strcpy(physics.name, "mir kk");
    physics.numberOfPages = 100;
    physics.price = 12.4;

    printf("%d \n", physics.numberOfPages);
    printf("%f \n", physics.price);
    printf("%s \n", physics.name);
    return 0;
}
