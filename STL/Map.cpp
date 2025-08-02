#include<iostream>
#include<map>
using namespace std;
int main(){

    map<string ,int> m;

    m["tv"] = 100;
    m["iphone"] = 5000;
    m["a.c"] = 200;
    m["tablet"] = 400;
    m["watch"] = 800;
    m["headphone"] = 2200;
    m.insert(make_pair("car",10000000));

    m.emplace("camera", 1200);
    m.erase("tablet");
   
    for(auto pairr : m){
        cout<<pairr.first<<" "<<pairr.second<<endl;                //! alphabeticaly shorted.
    }

    cout<<"Count is : "<<m.count("tablet")<<endl;

    if(m.find("camera") != m.end()){
        cout<<"Element found";
    } 
    else{
        cout<<"Not found";
    }
}