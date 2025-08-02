#include<iostream>
#include<set>
using namespace std;
int main(){
    // set<int> s;
    set<int, greater<int>> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    s.insert(4);
    s.insert(5);
    s.insert(12);
    s.insert(15);

    s.erase(2);

    for(auto sett : s){
        cout<<sett<<" ";
    }
    cout<<endl;

    cout<<"Size is : "<<s.size()<<endl;

    if(s.find(10) != s.end()){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Not-Present"<<endl;
    }

    cout<<"Lower bound : "<<*(s.lower_bound(4))<<endl;  //* Should not be less then key here key is 4 if key is present then it is key or greater then.

    cout<<"Upper bound : "<<*(s.upper_bound(4))<<endl;  //* Returns greater then key value.

}