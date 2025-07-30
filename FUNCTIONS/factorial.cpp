#include<iostream>
using namespace std;
int factorial(int x){
    if(x == 1)
    return x;
    return x * factorial(x-1);
}
int main(){
    int x = 5;
    cout<<"Factorial of "<< x <<" is "<<factorial(x)<<endl; 
}