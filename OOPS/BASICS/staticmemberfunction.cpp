#include<iostream>
using namespace std;
class demo{
    int x,y;
    int sum;
    static int z;
    public:
    void getdata(int a,int b){
        x = a;
        y = b;
        sum = x + y;
        z++;
    }
    void putdata(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
        cout<<"The value of sum of x and y is : "<<sum<<endl;
    }
    
static void functionname(){ //seperate function from object
    // cout<<x<<endl<<y; // it is not accessable ->x and y are no accessable
    cout<<"The value of z is : "<<z;
}
}aa,bb;

int demo :: z;

int main(){
    aa.getdata(22,54);
    bb.getdata(50,54);

    aa.putdata();
    bb.putdata();

    demo :: functionname();
}