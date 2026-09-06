#include <stdio.h>
int main(){
    struct pokemon{    // user defined data type 
        int hp;
        int speed;
        int attack;
        char tier;     // S,A,B,C,D
    }pikachu, charizard, mewtow;
  
    pikachu.attack = 1000;
    pikachu.hp = 100;
    pikachu.speed = 50;
    pikachu.tier = 's';
    printf("--- Pikachu ---\n");
    printf(" Attack - %d\n HP - %d\n Speed - %d\n Tier - %c\n", pikachu.attack, pikachu.hp, pikachu.speed, pikachu.tier);

    charizard.attack = 780;
    charizard.hp = 500;
    charizard.speed = 20;
    charizard.tier = 'B';
    printf("\n--- Charizard ---\n");
    printf(" Attack - %d\n HP - %d\n Speed - %d\n Tier - %c\n", charizard.attack, charizard.hp, charizard.speed, charizard.tier);

    mewtow.attack = 800;
    mewtow.hp = 200;
    mewtow.speed = 20;
    mewtow.tier = 'S';
    printf("\n--- Mewtow ---\n");
    printf(" Attack - %d\n HP - %d\n Speed - %d\n Tier - %c\n",mewtow.attack, mewtow.hp,mewtow.speed,mewtow.tier);

    return 0;

}