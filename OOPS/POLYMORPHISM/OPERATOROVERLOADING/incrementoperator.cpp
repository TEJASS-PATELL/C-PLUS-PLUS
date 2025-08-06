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
    void operator++(int){
    a = a+9; // here the value is changed by me
}
};
int main(){
    A aa;
    aa.getdata();
    cout<<"Original value : ";
    aa.putdata();
    aa++;
    cout<<"Increase value : ";
    aa.putdata();
}