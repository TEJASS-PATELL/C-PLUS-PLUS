#include <iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int target){

    while (low <= high){
        int mid = (low+high)/2;

    if(array[mid]==target){
        if(array[mid-1]==target){
        low = mid+1; // or  // high = mid-1;
        }
        else {
        return mid;
        }
        break;
    }
    if(array[mid]>target){
        high = mid-1;
    }
    if(array[mid]<target){
        low = mid+1;
    }
    }
      return -1;
}
int main(){
  int arr[] = {1,2,2,2,3,4,5,5,6,6,6,7,8,9,9};
  int target;
  cout<<"Enter no b/w 1 to 10 : ";
  cin>>target;
  int n = sizeof(arr)/4;
  
  int result = binarySearch(arr, 0, n-1, target);

  if (result == -1){
      cout<<"Element doesn't exist in the array";
  }
  else{
      cout<<"The index of the element is : "<<result;
  }
} 