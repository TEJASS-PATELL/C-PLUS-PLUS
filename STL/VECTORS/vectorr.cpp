#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> V;
    V = {9,7,1,2};
    V.push_back(5); // add element from the back
    V.emplace_back(8); // add element from the back of back element

    for(auto it=V.begin(); it!=V.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int> V1(5,80); //! 80 print hoga 5 times.
    vector<int> V2(V1); // We can copy a vector but we can change the value of new vector
    V2.push_back(90);

    for(auto it=V2.begin(); it!=V2.end(); it++){
        cout<<*(it)<<" "; 
    }
    cout<<endl;

    vector<int> V3;
    V3 = {1,2,3,4,5,6,7,8,9};
    V3.erase(V3.begin()+4,V3.end()-1); // we erase all element in between vector[start , end) begin()+ , end()-

    for(auto it=V3.begin(); it!=V3.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int> V4;
    V4 = {1,2,3,4,5,6,7,8,9};
    V4.insert(V4.begin()+4,4,10); //?  we can insert an element in vector 10 adds 4 time.

    cout<<"Forward vector V4 is : ";
    for(auto it=V4.begin(); it!=V4.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"Backward vector V4 is : ";

    for(auto it=V4.rbegin(); it!=V4.rend(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector<int> V5;
    V5 = {1,2,3,4,5,6,7,8,9};
    cout<<"Size is: "<<V5.size()<<" ";
    cout<<endl;

    vector<int> V6;
    V6 = {60,90,78}; // WE CAN SWAP TO vectors
    vector<int> V7;
    V7 = {10,20,45};
    V6.swap(V7); //* V6 me V7 ki value a jayengi and viseversa.
    cout<<"Swap vector of V6 is: ";
    for(auto it=V6.begin(); it!=V6.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
      cout<<"Swap vector of V7 is: ";
    for(auto it=V7.begin(); it!=V7.end(); it++){
        cout<<*(it)<<" ";
}
    cout<<endl;

    vector<int> V8;
    V8 = {59,330,25,67,2,6,77,6,4,5,7,90,6,50,4}; // clear all element
    V8.clear();
    
    for(auto it=V8.begin(); it != V8.end(); it++)
    cout<<*(it)<<" ";

    vector<int> V9 = {1,2,3,4,5,6,7,8,9};
    cout<<"Starting position : "<<*(V9.begin())<<endl;
    cout<<"Ending position : "<<*(V9.end()-1)<<endl;
}