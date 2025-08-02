#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,string> A;
    A = {5,"Tejas"};
   //  pair<int,string> &A1 = A;
   // A.first = 8;
  // A.second = "Patel";
   cout<<A.first<<endl;
   cout<<A.first<<":"<<A.second<<endl;

    pair<int , pair<string,int>> P;
    // P = {2, {"Tejas" , 5}};
    P.first = 4;
    P.second.first = "Patel";
    P.second.second = 6;

    cout<<P.first<<endl;
    cout<<P.first<<":"<<P.second.first<<":"<<P.second.second<<endl;


    vector<pair<int , int>> V = {{1,2} , {3,4} , {5,6} , {7,8}};

    V.push_back({9,10}); //* Insert
    V.emplace_back(11,12); //* in-place object create.

    for(auto vect : V){
      cout<<"Vector is : "<<vect.first<<" "<<vect.second<<endl;
    }

}