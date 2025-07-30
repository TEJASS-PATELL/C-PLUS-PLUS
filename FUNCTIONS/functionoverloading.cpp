#include<iostream>
using namespace std;
int sum(int a, int b){
     int result = a+b;
     return result;
}
double sum(double a , double b){
     return a+b;
}
float sum(float a , float b , float c){
     return a+b-c;
}
int main(){
    cout<<"Int : "<<sum(10 , 8)<<endl;
    cout<<"Double : "<<sum(10.8,4.7)<<endl;
    cout<<"Float : "<<sum(10.2,5,12.6)<<endl;
}