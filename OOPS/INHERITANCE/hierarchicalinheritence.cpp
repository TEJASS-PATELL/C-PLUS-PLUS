#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    void inputX(){
        x = 74;
        cout<<"Enter no x : "<<x<<endl;
    }
};
class B : public A
{
    protected:
    int y;
    int z;
    public:
    void inputY(){
        y = 55;
        cout<<"Enter no y : "<<y<<endl;
        z = x+y;
        cout<<"Sum of x and y is : "<<z<<endl;
    }
};
class C : public A
{
    protected:
    int t;
    int maximum;
    public:
    void maximam(){
         cout<<"Enter a no : ";
         cin>>t;
         maximum = max(x,t);
         cout<<"The maximum value is : "<<maximum;
    }
};
int main(){
    C aa;
    B bb;
    bb.inputX();
    bb.inputY();
    aa.inputX();
    aa.maximam();
}