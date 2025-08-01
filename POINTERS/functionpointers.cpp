#include<iostream>
using namespace std;
int addnumber(int a,int b){
    return a+b;
}
int main(){
    int(*functionptr)(int,int) = addnumber; // function pointer declared.
    cout<<functionptr(5,4)<<endl;
    cout<<addnumber(8,9);
}
