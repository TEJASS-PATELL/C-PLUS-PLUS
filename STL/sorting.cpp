#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // int arr[]  = {2,4,5,43,6,64,1,51,28,8,20};

    // sort(arr , arr + 11);
    // for(int x : arr){
    //     cout<<x<<" ";
    // }

    vector<int> vec={4,3,5,7,8,1,2,10,40};

//  sort(vec.begin() , vec.end());   //! increasing order.
    sort(vec.begin() , vec.end() , greater<int>());   //! decreseing order.

    for(int x : vec){
        cout<<x<<" ";
    }

     cout<<endl;
     vector<int> v={4,3,5,7,8,1,2,11,42};

     reverse(v.begin()+3 , v.end()-2);
     
     for(int x : v){
        cout<<x<<" ";
    }

}