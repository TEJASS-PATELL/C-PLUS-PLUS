#include<iostream>
using namespace std;
class demo{
    int x,y;
    int *z;
    public:
          // demo(int a,int b){                 //? parameterized constructor
          //    this->x = a;                   //! this keyword is used to store the address of the object
          //    this->y = b;
          // }

          //? inline constructor
          inline demo(int avalue, int bvalue) : x(avalue), y(bvalue) {
            z = new int[100];  //? if memory is not present then it will throw error.
            cout<<"Constructor runs"<<endl;
          }
          void putData(){
            cout<<"Value of x is : "<<x<<endl;
            cout<<"Value of y is : "<<y<<endl;
          }
};

int main(){
    int t,s;
    cout<<"Enter two numbers : ";
    cin>>t>>s;
    demo aa(t,s);
    aa.putData();
}
    