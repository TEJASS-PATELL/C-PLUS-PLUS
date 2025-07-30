#include <iostream>
using namespace std;
void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            cout<<"Non-Prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    }
}
int main(){
    prime(11);   
}