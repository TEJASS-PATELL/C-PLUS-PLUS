#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(6);
    dq.push_front(8);

    dq.pop_back();
    dq.pop_front();

    for(int val : dq){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<dq[2];

  //! All opperations is same as vector's.
}