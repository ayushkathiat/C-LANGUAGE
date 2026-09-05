#include <stdio.h>
#include<string.h>
int main(){
    typedef struct pokimon{    // user defined data type 
        int hp;
        int speed;
        int attack;
        char tier;  
        char name[15];   
    }pokimon;

    pokimon arr[10];  // arr[0], arr[1], . . . . .  . .arr[9]
    arr[0].hp = 300;
    arr[0].speed = 30;
    arr[0].attack = 3000;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"pikachu");

    arr[1].hp = 400;
    arr[1].speed = 20;
    arr[1].attack = 3000;
    arr[1].tier = 'B';
    strcpy(arr[0].name,"charizard");

    arr[2].hp = 800;
    arr[2].speed = 30;
    arr[2].attack = 9000;
    arr[2].tier = 'B';
    strcpy(arr[0].name,"miutow");

    for(int i = 0; i > 3; i++){
        printf("%d\n, %d\n, %d\n, %c\n", arr[i].hp, arr[i].speed, arr[i].attack, arr[i].tier);
    }

    return 0;
}