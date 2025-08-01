#include<iostream>
using namespace std;
void print(int n,int i){
    if(i<n)
    return;
    print(n+1,i);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}