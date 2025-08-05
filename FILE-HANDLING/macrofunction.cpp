#include<iostream>
#define PI 3.14159265359
#define area(r) (PI*r*r)
using namespace std;
// float area(float r){
//     return PI*r*r;
// }
int main(){ 
    int r;
    cout<<"Enter a number : ";
    cin>>r;
    cout<<area(r);
}