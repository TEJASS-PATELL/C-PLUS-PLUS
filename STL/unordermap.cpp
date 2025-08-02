#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<string ,int> m;

    m["tv"] = 100;
    m["iphone"] = 5000;
    m["a.c"] = 200;
    m["tablet"] = 400;
    m["headphone"] = 2200;
    m["watch"] = 800;

    m.emplace("camera", 1200);

    m.erase("tablet");
   
    for(auto pairr : m){
        cout<<pairr.first<<" "<<pairr.second<<endl;
    }

    cout<<"Count is : "<<m.count("tablet")<<endl;

}