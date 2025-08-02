#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   // string s = "abcd";
    string s = "abdc";

   // next_permutation(s.begin() , s.end());
    prev_permutation(s.begin() , s.end());
    
    cout<<s<<" ";
}