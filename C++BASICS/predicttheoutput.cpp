#include<iostream>
using namespace std;
int main(){ 
  //  int i=10;
   // while(i=20)// code run infinite time because i++ condition is not present.
    //cout<<"hello tejas"<<endl;
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
        else cout<<x<<"   "<<y<<endl;
    }
}