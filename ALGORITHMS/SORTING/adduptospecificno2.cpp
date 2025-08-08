#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int c=9;
    int n=sizeof(arr)/4; 
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(arr[i]+arr[j]==c){
        cout<<arr[i]<<" "<<arr[j];
        break;}
      else if(arr[i]+arr[j]>c){ // to decrease
        j--;}
        else i++; // increase
    }
}
