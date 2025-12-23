#include <stdio.h>
#include <string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

void fun(pokemon p){
    printf("%d",p.hp);

    return;
}

void change(pokemon p){
    p.hp = 120;
    p.attack = 800;
    p.speed = 200;
    return;
}
int main(){
    // typedef struct pokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier;
    //     char name[15];
    // }pokemon;

    // declare structure globally
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    //fun(pikachu);

    // structure are passed by values not by reference
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);

    return 0;
}