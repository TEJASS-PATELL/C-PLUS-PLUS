#include<iostream>
using namespace std;
class complex{
   int a, b;
   public:
   void setdata(){
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
   }
   void getdata(int x,int y){
       a = x;
       b = y;
   }
};
int main(){
    complex aa;
//  complex *ptr = &aa;
 complex *ptr = new complex;
 aa.getdata(55,81);
 aa.setdata();
 // (*ptr).getdata(55,81); is exactly same as
   ptr->getdata(55,81);
  (*ptr).setdata();
}