#include<iostream>
using namespace std;
bool isarmstrong(int n){
    int copyNo = n;
    int sumofcubes = 0;

    while( n != 0){
        int digit = n % 10;
        sumofcubes += (digit * digit * digit);

        n = n/10;
    }
    return sumofcubes == copyNo;
}
int main(){
    int n = 153;
    if(isarmstrong(n)){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Non-Armmstrong";
    }
}