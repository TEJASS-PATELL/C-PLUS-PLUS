#include<iostream>
using namespace std;
class A{
    protected : 
    int x;
    public: 
    void getdata(){
        cout<<"Enter x : ";
        cin>>x;
    }
    void putdata(){
        cout<<"X = "<<x<<endl;
    }
};
class B{
    protected : 
    int y;
    public: 
    void getdata(){
        cout<<"Enter y : ";
        cin>>y;
    }
    void output(){
        cout<<"Y = "<<y<<endl;
    }
};
class C : public A,public B
{   
    protected:
    int z;
    public:
    void input(){
        cout<<"Enter z : ";
        cin>>z;
        A ::getdata(), B ::getdata();
    }
    void display(){
       cout<<"Z = "<<z<<endl;
    }
};
int main(){
    C aa;
    aa.input();
    aa.display();
    aa.putdata();
    aa.output();
}