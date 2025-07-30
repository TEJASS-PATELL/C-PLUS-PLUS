#include<iostream>
using namespace std;
int recursive_sum(int m , int n){
    if(m == n)
    return m;
    return m + recursive_sum(m+1, n);
}
int main(){
    int a = 6 , b = 8;
    cout<<"Sum : "<<recursive_sum(a,b)<<endl; 
}
