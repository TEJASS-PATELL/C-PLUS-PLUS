#include<iostream>
#include<vector>
using namespace std;
int reverse(vector<int> nums, int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
       for(int i : nums){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> vec = {2,3,4,5,6,7,8,9};
    int size = 8;
    reverse(vec, size); 
}