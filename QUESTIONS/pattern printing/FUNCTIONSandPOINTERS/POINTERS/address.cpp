#include<iostream>
using namespace std;
int main(){
    int x=4;
    int y=4;
    int*p =&x;
    int*z =&y;
    cout<<&x<<" "<<&y<<endl;
    cout<<p<<" "<<z<<endl;
    cout<<*p<<endl;
}