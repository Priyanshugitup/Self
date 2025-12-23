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

    pokemon a,b,c;
    a.attack = 100;
    a.speed = 90;
    a.hp = 100;
    a.tier = 'A';
    strcpy(a.name,"Pikachu");

    b = c = a; // b me bhi a aa gya
    printf("%s\n",a.name);
    printf("%s\n",b.name);
    printf("%s\n",c.name);
    
    // deepcopy -> changing b doesn't changes a
    strcpy(b.name,"Charizard");
    printf("%s\n",b.name);
    printf("%s\n",a.name);
    printf("%s\n",c.name);
    return 0;
}