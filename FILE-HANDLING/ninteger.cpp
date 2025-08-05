#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number : ";
     cin>>n;
     int* ptr = (int*)malloc(n*4);
     int* p = ptr;
     for (int i = 1; i <= n; i++){
      cin>>*ptr;
      ptr++;
     }
    for (int i = 1; i <= n; i++){
      cout<<*p;
      p++;
     }
}