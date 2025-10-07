#include<iostream>
using namespace std;

class User{
    public:
    virtual void speak() = 0;   //? abstract class a class that does't make object.
}; 

class Male : public User{
    public:
    void speak(){
        cout<<"hello Boy"<<endl;
    }
};

class Female : public User{
    public:
    void speak(){
        cout<<"hello girl"<<endl;
    }
};

int main(){
    //? User a; not possible
    Male m1;
    m1.speak();
    Female f1;
    f1.speak();
}