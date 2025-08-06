#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
          demo(int a,int b){ //parameterized constructor
             x = a;
             y = b;
          }
          void putData(){
            cout<<"Value of x is : "<<x<<endl;
            cout<<"Value of y is : "<<y<<endl;
          }
};

int main(){
    int t,s;
    cout<<"Enter two numbers : "<<endl;
    cin>>t>>s;
    demo aa(t,s);
    aa.putData();
}
    