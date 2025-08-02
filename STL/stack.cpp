#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Top of the stack : "<<s.top()<<endl;

    cout<<"Stack is : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"S size : "<<s.size()<<endl;
    s.push(10);
    s.push(20);

    stack<int> s2;

    s2.swap(s);
    cout<<"s2 size : "<<s2.size()<<endl;

    cout<<"Stack is : ";
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    cout<<endl;
    

}