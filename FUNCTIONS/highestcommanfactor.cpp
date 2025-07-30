#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
    if(a%i==0 && b%i==0){
        hcf = i;
    }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    int hcf = gcd(a,b);
    cout<<"Highest comman factor of a and b is : "<<hcf;
}