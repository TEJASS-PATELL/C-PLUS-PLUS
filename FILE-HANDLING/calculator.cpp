#include<iostream>
using namespace std;
int main(){
    int a; // 4 bytes
   // cout<<"Enter 1st no : ";
    cin>>a;
     char ch; //1 bytes
    cin>>ch;
    int b; // 4 bytes
    // cout<<"Enter 2nd no : ";
    cin>>b;

    switch(ch){
        case '+':
        cout<<a+b;
        break;
          case '-':
        cout<<a-b;
        break;
          case '*':
        cout<<a*b;
        break;
          case '/':
        cout<<a/b;
        break;
    }
}