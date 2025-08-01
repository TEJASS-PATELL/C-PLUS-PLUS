#include<iostream>
using namespace std;
void print(int i,int n){
       if(i<1)
       return;
       print(i-1,n); // not -< (i=i-1,n)
       cout<<i<<" "; // it complete first
}
int main(){
    int n;
    cin>>n;
    print(n,n);
}