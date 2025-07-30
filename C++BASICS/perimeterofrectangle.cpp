#include<iostream>
using namespace std;
int main(){
    int length;
    cin>>length;
    int breadth;
    cin>>breadth;
    int area = length*breadth;
    int perimeter =2*(length+breadth);
    if(area>perimeter) cout<<"greater";
    else cout<<"not greater";
    


}