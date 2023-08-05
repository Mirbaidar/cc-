#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    // nesting  structures

    typedef struct legendarypokemon
    {
        pokemon normal;
        char ablity[13];
    } legendarypokemon;

    // accessing elements in nesting structures
    legendarypokemon meuto;
    strcpy(meuto.ablity, "pressure");
    meuto.normal.attack = 100;
    meuto.normal.hp = 378;
    strcpy(meuto.normal.name, "meutu");
    meuto.normal.speed = 120;
    meuto.normal.tier = 'a';
 
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialAttack;
    }godpokemon;

    godpokemon mahesh;
    mahesh.legend.normal.attack = 1000;
    mahesh.specialAttack =1000000;
    mahesh.legend.normal.speed= 109;
    strcpy(mahesh.legend.normal.name,"mahesh");
    strcpy(mahesh.legend.ablity ,"turns into stone");
    return 0;
}