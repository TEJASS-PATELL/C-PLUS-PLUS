#include<iostream>
using namespace std;
void swap(int* i,int* j){
    int temp;
    temp = *i;  // temp = 6;
    *i = *j;  // a = 9;
    *j = temp;  // * j = 6 ; ->b = 2;
    return;
}
int main(){
    int a=6;
    int b=9;
    int* x = &a;
    int* y = &b;
    swap(&a,&b);
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b;

}