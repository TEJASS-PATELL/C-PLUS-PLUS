#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
try{
    if(b!=0)
        {
          c=a/b;
          cout<<"Division of a and b is : "<<c;
}
    else{
    throw(b);
}
    }
catch(int b){
          cout<<"Divide by "<<b<<" Error ";
    }
}