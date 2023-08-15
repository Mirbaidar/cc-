#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon {
        int hp ;
        int attack;
        int speed ;
        char tier;
        char name[23];
    } pokemon;
    typedef struct legendarypokemon {
        pokemon normal ;
        char ablity[23];
    }legendarypokemon;
    legendarypokemon meutu;
    meutu.normal.hp = 12;
    meutu.normal.attack = 100;
    meutu.normal.speed = 120;
    meutu.normal.tier = 'b';
    
    return 0;
}
