#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int r =0;
    while (n>0)
    {
    int ld=n%10;
    r=r*10;
    r=r+ld;
    n=n/10;
    }
    int x=r;
    cout<<x<<endl;
    int sum=0;
   while (x>0){
       int ld = x%10;
       x=x/10;
       sum=sum+ld;
    }
    cout<<sum*2;
}
    