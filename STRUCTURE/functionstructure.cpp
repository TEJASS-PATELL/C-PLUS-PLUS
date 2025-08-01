#include<iostream>
#include<string.h>
using namespace std;
      typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
//void function(pokemon p){
  //  cout<<p.hp<<endl<<p.attack<<endl<<p.speed;
//}
void change(pokemon c){
    c.hp = 70;
    c.attack = 90;
   c.speed =60; 
}
int main(){
    pokemon pikachu;
    pikachu.hp = 50;
    pikachu.attack = 80;
    pikachu.speed = 90;
    change(pikachu);
    cout<<pikachu.attack<<endl<<pikachu.hp<<endl<<pikachu.speed;

}