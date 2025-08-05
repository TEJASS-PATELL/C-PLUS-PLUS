#include<iostream>
using namespace std;
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int a=5;
    int b=8;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
        cout<<a<<" "<<b<<endl;
}