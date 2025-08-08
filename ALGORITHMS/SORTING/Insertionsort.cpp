#include<iostream>
using namespace std;
int main(){
    int arr[]={5,9,4,1,88,65,35,97};
    int n=sizeof(arr)/4;
    for(int i=1;i<n;i++){
         int curr=arr[i];
         int j=i-1;
         while (arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
            }
         arr[j+1]=curr;
}
     for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
     }
     
}