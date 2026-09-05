#include <stdio.h>
int main(){
    struct pokimon{    // user defined data type 
        int hp;
        int speed;
        int attack;
        char tier;     // S,A,B,C,D
    }pikachu, charizard, mewtow;

    // pikachu.attack = 1000;
    printf("Enter the pikachu attack : ");
    scanf("%d", &pikachu.attack);
    pikachu.hp = 100;
    pikachu.speed = 50;
    pikachu.tier = 's';

    printf("%d", pikachu.attack);

    charizard.attack = 780;
    charizard.hp = 500;
    charizard.speed = 20;
    charizard.tier = 'B';

    mewtow.attack = 800;
    mewtow.hp = 200;
    mewtow.speed = 20;
    mewtow.tier = 'S';

    return 0;
}