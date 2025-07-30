#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter a last term : ";
    cin>>n;
    // 1 3 5 7 ....
   // for(int i=1;i<=2*n-1;i=i+2){
    //  cout<<i<<endl;} 
    // 4 7 10 13 ....
   // for(int i=4;i<=3*n+1;i=i+3){
     //   cout<<i<<endl;
     int a=4;
     for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
     }
    }
