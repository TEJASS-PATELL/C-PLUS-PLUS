#include<iostream>
#include<string.h>
using namespace std;
      typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        string tier;
        char name[15];
    }pokemon;

    int main(){
        pokemon A;
        strcpy(A.name,"Mewtwo");
        A.hp = 150;
        A.attack = 250;
        A.speed = 200;
        A.tier = 'L';
        // int* x>- address of integer value
        pokemon* x = &A; 
        cout<<&A.name<<endl;
        cout<<&A.hp<<endl;
        cout<<&A.attack<<endl;
        cout<<&A.speed<<endl;
        cout<<&A.tier<<endl;

        cout<<&x;
    }