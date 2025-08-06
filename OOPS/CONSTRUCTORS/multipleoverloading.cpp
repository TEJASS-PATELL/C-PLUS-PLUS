#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
         demo(){ // default constructor
            x=5;
            y=4;
         }
         demo(int a,int b){ // parameterized constructor
            x = a;
            y = b;
         }
         demo(demo &z){ // copy constructor
            x = z.x;
            y = z.y;
         }
         void getData(){
            cout<<"The value of x is : "<<x<<endl;
            cout<<"The value of y is : "<<y<<endl;
         }
};
int main(){
    demo aa;
    demo bb(20,50);
    demo cc(aa);
    aa.getData();
    bb.getData();
    cc.getData();
}
        