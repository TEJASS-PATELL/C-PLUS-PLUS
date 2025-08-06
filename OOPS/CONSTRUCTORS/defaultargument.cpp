#include<iostream>
using namespace std;
class demo{
    int x,y,z;
    public:
           demo(int a,int b=7,int c=8){   // b and c are default argument and it is automatically invoked 
               x = a;
               y = b;
               z = c;
           }    
           void getData(){
             cout<<"the value of x ix : "<<x<<endl;
             cout<<"the value of y ix : "<<y<<endl;
             cout<<"the value of z ix : "<<z<<endl;
           }
}aa(26,48);
int main(){
           aa.getData();
}