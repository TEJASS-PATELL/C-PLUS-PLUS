#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<"Address : "<<ptr<<endl;
    cout<<"Value : "<<*ptr<<endl;

    // new keyword-
    int* x = new int(20);
    cout<<"Value : "<<*x<<endl;
    cout<<"Address : "<<x<<endl;

    int* arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    delete[] arr;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl; 
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;
    cout<<"The value of arr[3] is : "<<arr[3]<<endl;

    // delete operator-
    delete[] arr;
}