#include <iostream>
using namespace std;
int BinarytoDec(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int rem = n%10;
        n = n/10;
        ans += rem*pow;
        pow = pow*2;
    }
    return ans;
}
int main(){
    int decNum = 10110;
    cout<<"Conversion of Binary to Decimal: "<<BinarytoDec(decNum);   
}