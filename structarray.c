#include <stdio.h>
#include <stdio.h>
#include <string.h>
int main()

{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier[60];

    } pokemon;

    pokemon arr[10]; // arr[0]  arr[1]   arr[2]

    arr[0].attack = 100;
    arr[0].hp = 120;
    arr[0].speed = 160;
    strcpy(arr[0].tier, "a grade");

    arr[1].attack = 10;
    arr[1].hp = 126;
    arr[1].speed = 60;
    strcpy(arr[1].tier, "c grade");

    arr[2].attack = 200;
    arr[2].hp = 220;
    arr[2].speed = 360;
    strcpy(arr[2].tier, "A++  grade");

    printf("%d \n", arr[0].speed);
    printf("%d", arr[1].hp);
    printf("%s \n", arr[2].tier);

    puts("printing everything using loop");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].tier);
        printf("%d\n", arr[i].attack);
        printf("%d\n ", arr[i].hp);
        printf("%d\n", arr[i].speed);
        printf("\n");
    }
    return 0;
}