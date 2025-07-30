#include <iostream>
using namespace std;

void sumN(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum;
}
int main(){
    sumN(15);
}