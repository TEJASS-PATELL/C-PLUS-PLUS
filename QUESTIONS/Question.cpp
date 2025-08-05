#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
   // int sum=0;
   // while (n>0){
     //   int ld = n%10;
       // n=n/10;
       // sum=sum+ld;
    //}
    //cout<<sum;
    int product=1;
    while(n>0){
        int ld=n%10;
        n=n/10;
        product=product*ld;
    }
    cout<<product;
}