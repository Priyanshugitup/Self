#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendarypokemon{
        char ability[10];
        pokemon normal;;
    }legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialAttack;
    }godpokemon;

    godpokemon arceus;
    arceus.specialAttack = 300;
    strcpy(arceus.legend.ability,"Turns Anyone to Stone");
    arceus.legend.normal.attack = 500;
    // after adding '.' vs code automatically starts suggesting what to input next to dot

    legendarypokemon Mewtwo;
    strcpy(Mewtwo.ability,"Pressure");
    Mewtwo.normal.attack = 180;
    Mewtwo.normal.hp = 150;
    Mewtwo.normal.speed = 180;
    Mewtwo.normal.tier = 'S';
    strcpy(Mewtwo.normal.name,"Mewtwo");

    printf("%d\n",Mewtwo.normal.attack);
    printf("%d",arceus.legend.normal.attack);
    return 0;
}