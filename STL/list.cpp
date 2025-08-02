#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_front(6);
    li.push_front(8);


    li.pop_back();
    li.pop_front();

    for(int val : li){
        cout<<val<<" ";
    }
     cout<<endl;
    for(auto it = li.begin(); it != li.end(); it++){
      cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = li.rbegin(); it != li.rend(); it++){
      cout<<*it<<" ";
    }
    cout<<endl;
    // cout<<li[3];
  //! All opperations is same as vector's.
  cout<<li.front()<<endl;
  cout<<li.size()<<endl;
  cout<<li.back()<<endl;

}