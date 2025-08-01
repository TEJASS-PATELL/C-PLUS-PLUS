#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
     typedef struct legendarypokemon{
        pokemon normal;
        char ability[25];
     }legendarypokemon;
      typedef struct godpokemon{
         legendarypokemon legend;
         int specialattack;
      } godpokemon;

     legendarypokemon mewtwo;
     strcpy(mewtwo.normal.name,"Mewtwo");
     strcpy(mewtwo.ability,"Psychic power");
     mewtwo.normal.hp = 150;
     mewtwo.normal.speed = 200; 
     mewtwo.normal.tier = 'L';
     mewtwo.normal.attack = 180;

    godpokemon arceus;
    strcpy(arceus.legend.normal.name,"Arceus");
    strcpy(arceus.legend.ability,"Turn anyone to stone");
    arceus.legend.normal.attack = 500;
    arceus.specialattack = 400;
    arceus.legend.normal.hp = 600;

    cout<<mewtwo.normal.name<<endl;
    cout<<mewtwo.normal.hp<<endl;
    cout<<mewtwo.normal.speed<<endl;
    cout<<mewtwo.normal.tier<<endl;
    cout<<mewtwo.normal.attack<<endl;
    cout<<mewtwo.ability<<endl;
    cout<<arceus.legend.normal.name<<endl;
    cout<<arceus.specialattack<<endl;
    cout<<arceus.legend.normal.hp<<endl;
    cout<<arceus.legend.ability<<endl;
}