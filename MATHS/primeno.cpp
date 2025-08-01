#include<iostream>
using namespace std;
string isprime(int n){
for(int i=2; i*i <= n; i++){
    if(n % i == 0){
        return "Non-Prime";
    }
    else{
        return "Prime";
    }
}
}
int main(){
    int n = 13;
    cout<<isprime(n)<<endl;
}