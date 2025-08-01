#include<iostream>
using namespace std;
void print(int n,int i){
       if(i>n)
       return;
       cout<<n<<" ";
       print(n=n-1,i);
}
int main(){
    int n;
    cin>>n;
    print(n,1);
}