#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<&x<<endl;     // & -> this give address of variables.

    int* n = &x; 
    cout<<n<<endl;     //! n store address of the variable.
    cout<<&n<<endl;
    cout<<*n<<endl;   //* n store value that stored in address.

    *n = 10;
    cout<<*n<<endl;
    cout<<x<<endl;
    
    int v;
    int* n2 = &v;
    *n2 = 6; 
    cout<<*n2<<endl<<v;
     
}