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
    pokemon a,b,c;

    strcpy(a.name,"Blastoise");
    a.attack =90;
    a.hp=80;
    a.speed=120;
    a.tier='A';

    // b.hp = a.hp;
    // b.attack = a.attack;
    // b.speed = a.speed;
    // b.tier = a.tier;
    // strcpy(b.name,a.name);

    b = a; // deep copy
    c = a;
    
    strcpy(b.name,"Venusaur");
    b.hp = 100;

    cout<<b.name<<endl;
    cout<<b.hp<<endl;
    cout<<b.attack<<endl;
    cout<<b.tier<<endl;
    cout<<a.name<<endl;
    cout<<a.hp<<endl;
    cout<<a.attack<<endl;
    cout<<a.tier;




}