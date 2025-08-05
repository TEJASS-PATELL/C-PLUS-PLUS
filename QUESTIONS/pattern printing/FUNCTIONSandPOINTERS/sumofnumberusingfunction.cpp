#include<iostream>
using namespace std;
// void sum(int a , int b){
//         cout<<a+b;}
// int main(){
//     int a;
//     cout<<"enter a number : ";
//     cin>>a; 
//     int b;
//     cout<<"enter a number : ";
//     cin>>b; 
//     sum(a,b);
// }
int sum(int a , int b){
        return a+b; 
        }
int main(){
    int a;
    cout<<"enter a number : ";
    cin>>a; 
    int b;
    cout<<"enter a number : ";
    cin>>b; 
    cout<<sum(a,b);
}