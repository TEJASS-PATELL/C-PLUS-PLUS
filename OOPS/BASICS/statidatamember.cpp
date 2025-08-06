#include<iostream>
using namespace std;
class demo{
    int x,y;
    static int z;
    public:
    void getdata(int a,int b){
        x = a;
        y = b;
        z++;
    }
    void putdata(void){
    cout<<"Value of x is : "<<x<<endl;
    cout<<"Value of y is : "<<y<<endl;
    cout<<"Value of z is : "<<z<<endl;
    }
}aa,bb;

int demo :: z; // important line for static data member

int main(){
    aa.getdata(8,4);
   // aa.putdata(); // if it runs the value of z increse by 1 after one object is done

    bb.getdata(9,7);
    aa.putdata(); // if it runs the value of z become constant and it is 2
    bb.putdata();

}