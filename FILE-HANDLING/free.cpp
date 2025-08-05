#include<iostream>
using namespace std;
int main(){
     int* ptr = (int*)malloc(10*4);
     int* p = ptr; // starting pe set kar dia
     p++;
     free(p);
     cout<<*p;
}