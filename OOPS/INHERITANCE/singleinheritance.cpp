#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void input(){
        cout<<"Enter no x : ";
        cin>>x;
    }
    int getX(){
        return x;
    }
};
class B : public A 
{
    int y;
    public:
       void getData(){  //camelCase 
       cout<<"Enter no y : ";
       cin>>y;
       }
       void putData(){
        cout<<"Sum of x and y is : "<<getX()+y;
       }
}; // object of derived class are formed
int main(){
     B aa;
     aa.input();
     aa.getData();
     aa.putData();
}