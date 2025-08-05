#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,9,9,2,4,6,7,10,3};
    int n=sizeof(arr)/4;
    int sum=0; 
    int c;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    c=(n*(n-1))/2;
    cout<<"Duplicate no is : "<<sum-c;
}