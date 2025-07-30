#include<iostream>
using namespace std;
template<typename T> // typename = class
void Swap(T& a,T& b){
    T temp = a;
    a = b;
    b = temp;
} 
int main(){
    int c = 5 , d = 8;
    cout<<c<<" - "<<d<<endl;
    Swap<int>(c,d);
    cout<<c<<" - "<<d<<endl;
    char a = 'a' , b = 'b';
    cout<<a<<" - "<<b<<endl;
    Swap(a,b);
     cout<<a<<" - "<<b<<endl;
}