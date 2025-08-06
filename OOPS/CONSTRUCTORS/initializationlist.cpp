#include<iostream>
using namespace std;
class demo{ 
    int x,y,z;
    public:
       // demo(int a,int b,int c) : x(a),y(b),z(c){ // They all are work
       // demo(int a,int b,int c) : x(a+b),y(b-c),z(c*2){
            demo(int a,int b,int c) : x(a),y(b+x),z(c-y){
               cout<<"Constructor executed"<<endl;
                 cout<<"The value of x is : "<<x<<endl;
                  cout<<"The value of y is : "<<y<<endl;
                   cout<<"The value of z is : "<<z<<endl;
          }
}aa(97,67,88);
int main(){
     
}