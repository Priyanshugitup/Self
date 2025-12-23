#include <stdio.h>
#include <string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

void change(pokemon* p){
    // (*p).hp = 120;
    // (*p).speed = 800;
    // (*p).attack = 200;
    // (*p).tier = 'S';
    // strcpy((*p).name,"Raichu");

    // (*x).something   =   x->something
    
    p->hp = 120;
    p->speed = 800;
    p->attack = 200;
    p->tier = 'S';
    strcpy(p->name,"Raichu");
    return;
}

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 100;
    pikachu.attack = 70;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    printf("\n");

    change(&pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}