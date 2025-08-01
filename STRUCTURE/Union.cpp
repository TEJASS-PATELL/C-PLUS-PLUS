#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdbool.h>
using namespace std;
      typedef union pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

        int main(){
        pokemon A;
        strcpy(A.name,"Mewtwo");
        A.hp = 150;
        A.attack = 250;
        A.speed = 200;
        A.tier = 'L'; // only it work's correctely

        cout<<A.name<<endl;
        cout<<A.hp<<endl;
        cout<<A.attack<<endl;
        cout<<A.speed<<endl;
        cout<<A.tier<<endl;
         }