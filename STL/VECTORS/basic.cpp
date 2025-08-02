#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5,6};
    // for(int i : vec){ //* for each loop
    //     cout<<i<<" ";
    // }
    int n = vec.size();
    for(int i=0 ;i<n ;i++){
        cout<<vec[i];
    }
}
