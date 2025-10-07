#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
           demo(){   // default constructor and it is automatically invoked 
            cout<<"Enter the value of x: ";
            cin>>x;
            y=7;
           }    
           void getData(){
             cout<<"the value of x ix : "<<x<<endl;
             cout<<"the value of y ix : "<<y<<endl;
           }
}aa,bb;
int main(){
           aa.getData();
           bb.getData();
}