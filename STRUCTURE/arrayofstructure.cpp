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

    pokemon arr[4]; // arr[0],arr[1],..............arr[4]
    
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 90;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Pikachu");
    
    arr[1].attack = 80;
    arr[1].hp = 120;
    arr[1].speed = 100;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"Charizard");
    
    arr[2].attack = 150;
    arr[2].hp = 150;
    arr[2].speed = 150;
    arr[2].tier = 'S';
    strcpy(arr[2].name,"Mew");

    arr[3].attack = 180;
    arr[3].hp = 200;
    arr[3].speed = 180;
    arr[3].tier = 'G';
    strcpy(arr[3].name,"Mewtwo");
    
    for(int i=0;i<4;i++){
        cin>>arr[i].name;
        cout<<"ATTACK = "<<arr[i].attack<<endl;
        cout<<"HP = "<<arr[i].hp<<endl;
        cout<<"SPEED = "<<arr[i].speed<<endl;
        cout<<"TIER = "<<arr[i].tier<<endl;
    }
    
}
