#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct pokemon {
        int speed;
        int hp;
        int attack;
        char tier;
        char name[21];
    }pokemon;
    
void fun(pokemon p){
 printf("%d",p.hp);

}
int main(){
 pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 12;  
    fun(pikachu);
     return 0;
}