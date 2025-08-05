#include<iostream>
using namespace std;
int main(){
    int x=8;
    int* p=&x;
    cout<<*p<<endl;
    *p=66;
    cout<<x<<endl;
}

