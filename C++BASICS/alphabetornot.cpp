#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a alphabet : ";
    cin>>ch;
    int x=(int)ch;
    if(x>=65 && x<=90){
        cout<<"alphabet";
    }
    else{
        cout<<"not alphabet";
    }
}