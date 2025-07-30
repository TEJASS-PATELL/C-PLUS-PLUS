#include<iostream>
using namespace std;
int add(int x,int y){
    cout<<x+y;
}
int main(){
    int a;
    cout<<"Enter 1st number : ";
    cin>>a;
    int b; 
    cout<<"Enter 2nd number : ";
    cin>>b;
    int sum = add(a,b);
}