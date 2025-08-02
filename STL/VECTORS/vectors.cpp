#include<iostream>
#include<vector>
using namespace std;
//  1.vector provide you all the benefits of dynamic array.
//  2.Vector elements are store element in ccontigous memory.
//  3.resize itself automatically when an element insert or deleted.

int main(){

    vector<int> numbers;
    for(int i=0;i <= 10; i++){
        numbers.push_back(i);
    }
    for(auto it = numbers.begin(); it != numbers.end(); it++){ //? cbegin() and cend() make iterator constant and we cannot change the value of iterator in our for loop.
        *it = 5;
        cout<<*it<<endl; // value of the element.
        cout<<&it<<endl; // address of iterator.
        cout<<&(*it)<<endl; // address of the element.
    }
        auto it = numbers.begin();
        cout<<*(it + 5)<<endl;

        cout<<"Size is : "<<numbers.size()<<endl;
        cout<<"Max Size : "<<numbers.max_size()<<endl;
        cout<<"Capacity : "<<numbers.capacity()<<endl;
        if(numbers.empty())
        cout<<"Vector is empty "<<endl;
        else cout<<"vector is not empty"<<endl;

        cout<<"Element [0] is: "<<numbers[0]<<endl;
        cout<<"Element at(0) is: "<<numbers.at(0)<<endl;

        cout<<"Front: "<<numbers.front()<<endl; // First element of vector
        cout<<"Back: "<<numbers.back()<<endl; // Last element of vector
       // numbers.clear();
        // cout<<"Size is: "<<numbers.size()<<endl;
        
        numbers.insert(numbers.begin()+8,65);
        //numbers.erase(numbers.begin()+5);
        numbers.pop_back(); // remove last element of vector

        for(auto n : numbers)
        cout<<n<<endl;
        numbers.resize(5);
        cout<<"The new size is : "<<numbers.size()<<endl;
}