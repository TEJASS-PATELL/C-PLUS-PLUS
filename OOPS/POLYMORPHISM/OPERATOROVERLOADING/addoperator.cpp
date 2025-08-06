#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getdata(){
        cout<<"Enter a no : ";
        cin>>a;
    }
    void putdata(){
        cout<<"value : "<<a<<endl;
    }
A operator+(A bb){
    A cc;
    cc.a = a+bb.a; // hear the sign matters if sign chsnge answer change
    return cc;
}
// Same for (-),(*)and (/ )
};
int main(){
    A aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc = aa+bb;
    cc.putdata();
}