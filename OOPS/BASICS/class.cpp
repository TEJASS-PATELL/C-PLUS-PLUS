#include<iostream>
using namespace std;
   
class student{

    private:
       int a, b, c;
    public:
       int d, e;

    void setdata(int a1,int b1,int c1);        // Declaration
    void getdata(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};
    void student :: setdata(int a1, int b1, int c1){ //initialization
        a = a1;
        b = b1;
        c = c1;
    }
int main(){
     student a;
     a.d = 5;
     a.e = 6;
     a.setdata(1,2,3);
     a.getdata();
}