#include<iostream>
using namespace std;
class A{
    public:
     void display(){
        cout<<"Base class"<<endl;
     }
};
class B : public A
{
    public:
    void display(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    B aa;
    aa.display(); // call derived class function
    aa.A::display(); // call base class function
}