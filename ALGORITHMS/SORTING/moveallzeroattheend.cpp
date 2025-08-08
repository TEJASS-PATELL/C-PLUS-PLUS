#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,4,0,6,0,0,0,10,8};
    int n=sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
            int c=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=c;
       }  
  }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
} 