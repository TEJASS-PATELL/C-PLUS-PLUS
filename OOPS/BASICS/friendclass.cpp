#include<iostream>
using namespace std;
// forward declaration
class complex;

class calculator{
    public:

     int sumcomplex(complex ,complex);
     int sumimagcomplex(complex ,complex);
     
}; 

class complex{

    int a;
    int b;

    public:
    //    Indivisually declaring function as friend
     //   friend int calculator :: sumcomplex(complex ,complex);
      //  friend int calculator :: sumimagcomplex(complex ,complex);

      // declare the entire calculator class as function
      friend class calculator;
      
        void setnumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printnumber(){
            cout<<"Your complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};
     int calculator :: sumcomplex(complex A,complex B){
     return (A.a+B.a);
 }
     int calculator :: sumimagcomplex(complex A,complex B){
     return (A.b+B.b);
     }


int main(){
         complex A,B;
         A.setnumber(2,5);
         B.setnumber(7,8);

         calculator cal;
         int x=cal.sumcomplex(A,B);
         cout<<"The sum of real part of A and B is "<<x<<endl;

         int y=cal.sumimagcomplex(A,B);
         cout<<"The sum of imaginary part of A and B is "<<y;
}
 
