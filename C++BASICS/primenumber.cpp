#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    bool x=true; //we let true means prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            x=false; //if numerber is composite or false
            break;
        }
    }
    if(n==1) cout<<"neither";
    else if(x==true) cout<<"prime";
    else cout<<"composite"; 
}