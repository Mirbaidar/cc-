#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct pokemon
{
    int abklity;
    int speed;
    char nname[12];
} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.abklity = 132;
    pikachu.speed = 345;
    strcpy(pikachu.nname, "pikachi1");
    pokemon *x = &pikachu;
    printf("%p \n", x);
    printf("%s \n", pikachu.nname);
   // printf("%s", *x);
    return 0;
}