#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    demo(){
        x=19;
        y=25;
        x++;
    }
    demo(demo &z){ // hear we can give the address of object 
      x = z.x; 
      y = z.y;
    }
    void getData(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
    }
}aa,bb(aa);
int main(){
        aa.getData();
        bb.getData();
}