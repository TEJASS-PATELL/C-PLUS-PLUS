#include<iostream>
using namespace std;
int main(){
    struct pokemon{ // user define data type
        int hp;
        int attack;
        int speed;
        char tier; // G,S,A,B,C,D
    } pikachu, charizard,mew,mewtwo;

    pikachu.attack = 60;
    pikachu.hp = 50; 
    pikachu.speed = 100;
    pikachu.tier = 'A';
    cout<<"Pikachu Attack : "<<pikachu.attack;

    charizard.attack = 140;;
    charizard.hp = 60; 
    charizard.speed = 80;
    charizard.tier = 'S';

    mew.attack = 180;
    mew.hp = 90;
    mew.speed = 120;
    mew.tier = 'S';

    mew.attack = 220;
    mew.hp = 120; 
    mew.speed = 200;
    mew.tier = 'G';

}