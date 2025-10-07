#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void inputX(){
        x = 86;
        cout<<"Enter no x : "<<x<<endl;
    }
};
class B : public A // inherit A
{
    protected:
    int y;
    public:
    void inputY(){
        y = 45;
        cout<<"Enter no y : "<<y<<endl;
    }
};
class C : public B // inherit B
{
    int z;
    public:
    void swap(){
        z = x;
        x = y;
        y = z;
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
        cout<<"The value of z is : "<<z<<endl;
    }
};
int main(){
    C aa;
    aa.inputX();
    aa.inputY();
    aa.swap();
}