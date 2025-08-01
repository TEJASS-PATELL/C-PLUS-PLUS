#include<iostream>
using namespace std;
class A{
    int a,b,c;
    public:
   // A& setdata(int a,int y,int z){
    void setdata(int a,int y,int z){
       this->a = a;
       this->b = y;
       c = z;
      // return *this;
    }
    void getdata(){
        cout<<"Solution : "<<(a+b)*c;
    }
};
//! this is a keyword which is pointer which points to the object which invokes the member function.
int main(){
    A aa;
    aa.setdata(3,6,9); //.getdata();
    aa.getdata();
}