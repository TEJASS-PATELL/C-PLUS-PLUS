#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> Q;

    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);

    cout<<"Top of the stack : "<<Q.front()<<endl;

    cout<<"Queue is : ";
    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }
    cout<<endl;
    cout<<"Q size : "<<Q.size()<<endl;
    Q.push(10);
    Q.push(20);

    queue<int> q2;

    q2.swap(Q);
    cout<<"q2 size : "<<q2.size()<<endl;

    cout<<"Queue is : ";
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }

    cout<<endl;
    
}