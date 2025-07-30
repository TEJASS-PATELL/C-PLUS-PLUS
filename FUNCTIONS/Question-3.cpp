#include <iostream>
using namespace std;
int Multiply = 1;
int factorial(int n){
   int number = 1;
   for(int i=1;i<=n;i++){
    number = number*i;
   }
   return number;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n-r);
    int answer = fact_n/(fact_r*fact_nr);
    return answer;
}
int main(){
    int n = 8 , r = 3;
    cout<<nCr(n,r);
}