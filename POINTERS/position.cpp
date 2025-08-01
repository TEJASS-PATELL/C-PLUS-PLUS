#include<iostream>
using namespace std;
int main(){
    int a = 10;
    
    int* ptr = &a;

    cout<<ptr<<endl;

    ptr = ptr + 2; //! 2int = 8bytes
    // ptr++
    cout<<ptr<<endl;

    int arr[] = {1,2,3,4,5};

    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
}