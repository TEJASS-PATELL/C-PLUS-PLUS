#include<iostream>
using namespace std;
class A{
int a;
public:
void getdata(){
    cout<<"Enter no : ";
    cin>>a;
}
void putdata(){
    cout<<a;
}
bool operator == (A bb){
    if(a == bb.a)
    return true;
    else return false;
}
};
int main(){
A aa,bb;
aa.getdata();
bb.getdata();
if(aa==bb)
cout<<"Value are equal";
else cout<<"Value are not equal";
}