#include<iostream>
using namespace std;
void number(int n){
if (n==0) return;
cout<<n<<endl;
number(n-1);
}
int main(){
    int n;
    cin>>n;
    number(n);
}