#include<iostream>
using namespace std;
class Y;
class X{
    int data;
     public:
     void setdata(int value){
        data = value;
     }
     friend void add(X,Y);
}a;

class Y{
    int num;
     public:
     void setdata(int value){
        num = value;
     }
     friend void add(X,Y);
}b;

void add(X a,Y b){
    cout<<"sum of value of o1 and sum of value of o2 : "<<a.data+b.num;
}

int main(){
      a.setdata(7);
      b.setdata(8);
      add(a,b);
}