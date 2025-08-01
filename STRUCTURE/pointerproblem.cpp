#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
typedef int* pointer;
int main(){
    int x = 9,y = 5;
    pointer a = &x,b = &y; // int* x and int y 
    cout<<a<<endl;
    cout<<b;
}