#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=8;
    cout<<"value of a is : "<<a <<" "<<"value of b is : "<<b<<endl;
//     int c=a;
//     a=b;
//     b=c;
//      cout<<"value of a is : "<<a <<endl<<"value of b is : "<<b;
// }
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"value of a is : "<<a<<" " <<"value of b is : "<<b;


}