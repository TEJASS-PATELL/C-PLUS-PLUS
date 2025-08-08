#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int c=9;
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        for(int j = i+1; j<n; i++){
            if(arr[i]+arr[j]==c)
            cout<<arr[i]<<" "<<arr[j];
            j++;
        }
    }
}