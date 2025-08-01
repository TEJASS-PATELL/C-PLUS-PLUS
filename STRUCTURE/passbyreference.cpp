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
      void change(pokemon* p){ // pokemon* p = &A
       strcpy((*p).name,"Mewtwo");
       // (*p).attack = 300; // A.attack = 300;
       p->attack = 300; //(p->.something = 300); or  (*p).something = 300);
      (*p).hp = 200;
      (*p).speed = 350;
      (*p).tier = 'G';
      }
    int main(){
        pokemon A ={150,200,250,'L',"Mew"};
        // strcpy(A.name,"Mew");
        // A.hp = 150;
        // A.attack = 250;
        // A.speed = 200;
        // A.tier = 'L';
        
        cout<<A.name<<endl;
        cout<<A.hp<<endl;
        cout<<A.attack<<endl;
        cout<<A.speed<<endl;
        cout<<A.tier<<endl;

        change(&A);

        cout<<A.name<<endl;
        cout<<A.hp<<endl;
        cout<<A.attack<<endl;
        cout<<A.speed<<endl;
        cout<<A.tier;

    }