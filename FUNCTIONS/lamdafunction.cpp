#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int d = 10 ,  e = 11;
 //  [capture case] (parameters)->return type {function definition}; = lambda function
 vector<int> v{2,3,4,5,6,7,8};
 for_each(v.begin(),v.end(),[d,e](int x){
   if(x%2==0){
   cout<<x+d<<" is even number "<<endl;
   cout<<"The value of e is : "<<e<<endl;
   }
   else
   cout<<x<<" is odd number "<<endl;
 });
    cout<<"The value of d and e is : "<<d << " "<< e;
}