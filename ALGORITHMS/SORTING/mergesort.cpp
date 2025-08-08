#include<iostream>
using namespace std; 
void merge(int arr[],int l,int mid,int r){

    int an = mid - l + 1;
    int bn = r - mid;
    // Create 2 temp array
    int A[an]; 
    int B[bn];

    for(int i=0;i<an;i++){
        A[i] = A[l+i];
    } 
    for(int j=0;j<bn;j++){
        B[j] = B[mid+1+j];
    }
    
    int i=0; //initial index of first subarray A
    int j=0; //initial index of second subarray B
    int k=l; //initial index of merged subarray

    while(i<an && j<bn){
          if(A[i]<B[j]){
            arr[k++]=A[i++];
          }
          else {
            arr[k++]=B[j++];
          }
    }
    while(i<an){
            arr[k++]=A[i++];
    }
    while(j<bn){
            arr[k++]=B[j++];
    }
}
void mergesort(int arr[],int l ,int r){
    if(l>=r){
    return;
    }
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int arr[]={1,4,6,8,99,23,11,25};
    int n = sizeof(arr)/4;

    mergesort(arr,0,n-1);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}