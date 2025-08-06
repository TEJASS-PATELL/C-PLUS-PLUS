#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void inputX(){
        cout<<"Enter no x : ";
        cin>>x;
    }
};
class B{
    protected:
    int y;
    public:
    void inputY(){
        cout<<"Enter no y : ";
        cin>>y;
    }
};
class C : public A, public B
{
    int z;
    public:
    void sum(){
        z = x+y;
        cout<<"The sum of x and y is : "<<z;
    }
};
int main(){
       C aa;  // object bana ke function ko call karte hai
       aa.inputX();
       aa.inputY();
       aa.sum();
}