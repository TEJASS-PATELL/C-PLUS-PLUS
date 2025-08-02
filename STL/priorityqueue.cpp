#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> Q;
    // priority_queue<int , vector<int> ,greater<int>> Q;   //todo- functors      //todo- use for print reverse data.
     
    Q.push(2);
    Q.push(1);
    Q.push(20);
    Q.push(3);
    Q.push(5);
    Q.push(4);

    cout<<"Top of the stack : "<<Q.top()<<endl;

    cout<<"Priority_Queue is : ";
    while(!Q.empty()){
        cout<<Q.top()<<" ";
        Q.pop();
    }
}