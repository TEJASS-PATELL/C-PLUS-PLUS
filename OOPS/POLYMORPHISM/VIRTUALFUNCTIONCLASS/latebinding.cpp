#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){ // IF WE DONT USE VIRTUAL KEY WORD THEN THE ALWAYS SHOW THE OUTPUT OF POINTER CLASS.   
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
    A *bptr;
    B aa; //  A aa;
    bptr = &aa; // latebinding at a run time
    bptr->show(); // call show name function
}