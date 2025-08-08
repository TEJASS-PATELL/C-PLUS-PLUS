#include <iostream>
using namespace std;
int dectoBinary(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int rem = n%2;
        n = n/2;
        ans += rem*pow;
        pow = pow*10;
    }
    return ans;
}
int main(){
    int decNum = 50;
    cout<<"Conversion of Decimal to Binary: "<<dectoBinary(decNum);   
}