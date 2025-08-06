#include<iostream>
using namespace std;
class complex{

    int a;
    int b;

    public:
     void setdata(int v1,int v2){
        a = v1;
        b = v2;
     }

     void setdatabysum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
     }

     void printnumber(){
        cout<<"Your complex number is : "<<a<<"+"<<b<<"i"<<endl;
        
     }
}C1,C2,C3;

int main(){
     C1.setdata(8,2);
     C1.printnumber();

     C2.setdata(3,5);
     C2.printnumber();

     C3.setdatabysum(C1,C2);
     C3.printnumber();

}