#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* x = &a;
    *x = 55; // a is changed
    cout<<*x<<endl;
    cout<<x<<endl;
    int b = 9;
    int* y = &b;
    cout<<y;
}
