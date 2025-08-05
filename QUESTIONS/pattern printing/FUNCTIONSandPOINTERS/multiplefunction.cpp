#include<iostream>
using namespace std;
void x(){
        cout<<"hello"<<endl;
        return; // code khatam ho jaata hai
}
void y(){
    cout<<"are you indian"<<endl;
    x();
}
int main(){ 
    cout<<"you are in main "<<endl;
    y();
}