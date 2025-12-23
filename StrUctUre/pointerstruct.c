#include <stdio.h>
#include <string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
  
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 100;
    pikachu.attack = 70;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    // // int* x -> address of integer value
     pokemon* x = &pikachu;
     printf("%d\n",pikachu.hp);
    // printf("%p\n",x);
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",pikachu.name);

    // int x;
    // int* p = &x;
    // *p = 7; // means x=7
    // printf("%d",x);

    (*x).hp = 70; // pikachu.hp converetd to 70
    printf("%d",pikachu.hp);
    return 0;
}