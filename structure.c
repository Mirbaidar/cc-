#include <stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tear; // a b c d S
    };

    struct pokemon pikachu;
    pikachu.attack = 109;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tear = 'a';

    struct pokemon charizat;
    charizat.speed = 60;
    charizat.attack = 130;
    charizat.hp = 80;
    charizat.tear = 's';

    printf("%d \n",pikachu.hp);
    printf("%c",charizat.tear);
    return 0;

}