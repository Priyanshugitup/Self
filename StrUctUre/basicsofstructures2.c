#include <stdio.h>

int main(){
    typedef struct pokemon{ // user defined datatype
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
    pokemon pikachu = {60,70,100,'A',"Pikachu"}; // jis order me structure ke andar variable declared hai usi order me likhna hai and
    // all initialization should be done at once

    // pikachu.attack = 60;
    // pikachu.hp = 50;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}