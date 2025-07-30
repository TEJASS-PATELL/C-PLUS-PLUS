#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"divisible by both";
        }
        else{
            cout<<"invalid";
        } 

    }
    else{
        cout<<"invalid";
    }
}