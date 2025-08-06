#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Base class"<<endl;
    }
};
class B : public A
{
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    B aa;
    aa.show(); // earlybinding compiler knows who run first
    aa.A :: show();
}