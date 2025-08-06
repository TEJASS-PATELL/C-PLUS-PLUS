#include<iostream>
using namespace std;
class A
{
    protected:
    int x,y;
    public:
    A(){
        x=19;
        y=25;
        x++;
        y++;
    }
    void getData(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
    }
};
class B : public A
{
    protected:
    int t;
    int s;
    public:
    B(){ // First the constructor of all classes were run automatically then the function were run
        cout<<"Enter a number : ";
        cin>>s;
        t = x+y;
    }
    void maximum(){
        cout<<"Enter no t : "<<t<<endl;
        cout<<"maximum value is : "<<max(t,s);
    }
};
int main(){
        B aa;
        aa.getData();
        aa.maximum();
}