#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> vec = {1,18,3,4,5,67,8,9,93,29,24,12,31,33};

    cout<<"Max-element : "<<*(max_element(vec.begin() , vec.end()))<<endl;
    cout<<"Min-element : "<<*(min_element(vec.begin() , vec.end()))<<endl;


    //! Sort the vector before using binary_search
    sort(vec.begin(), vec.end());
    cout<<"Binary-search : "<<(binary_search(vec.begin() , vec.end() , 998) ? "Found" : "Not-Found");

}