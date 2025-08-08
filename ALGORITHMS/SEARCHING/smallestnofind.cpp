#include<iostream>
using namespace std;
int binarySearch(int array[],int low,int high,int missing){

    while(low<=high){
        int mid = low+high/2;

        if(array[mid]==mid)
        low = mid+1;
        else{
        missing = mid;
        high = mid-1;
        }
        return missing;
}
}
int main(){

  int arr[] = {0,1,2,3,4,6};
  int n = sizeof(arr)/4;

  int result = binarySearch(arr, 0, n-1 ,n);

      cout<<"The missing element is : "<<result;
}