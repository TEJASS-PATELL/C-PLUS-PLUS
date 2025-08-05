#include<iostream>
using namespace std;
template<class X, class Y>
    X big(X a, X b, Y c){
        if(a>b)
        return a+c;
        else 
        return b+c;
        }
int main(){
    cout<<big(6,9,8.1)<<endl;
    cout<<big(5.8,9.9,1);
}