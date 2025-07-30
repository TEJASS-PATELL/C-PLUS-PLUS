#include <iostream>
using namespace std;

int digitSum = 0;
void sum(int n){
    while(n>0){
        int lastN = n%10;
        n = n/10;
        digitSum = digitSum + lastN;
    }
    cout<<digitSum;
}
int main(){
    sum(155);
}