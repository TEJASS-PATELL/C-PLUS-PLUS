#include <iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int target){

    while (low <= high){
        
        int mid = low + (high - low)/2;

        if(target < array[mid]){
            high = mid - 1;
        }
        if(target > array[mid]){
            low = mid + 1;
        }
    }
        return low;
}
int main(){
  int arr[] = {2,4,7,9,10,13,20};
  int target;
  cout<<"Enter no b/w 1 to 30 : ";
  cin>>target;
  int n = sizeof(arr)/4;
  
  int result = binarySearch(arr, 0, n-1, target);

      cout<<"The index of the element is : "<<result;

}
  