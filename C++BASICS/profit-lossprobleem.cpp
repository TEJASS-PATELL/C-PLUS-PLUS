#include<iostream>
using namespace std;
int main(){
    int cp ;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"profit made : ";
        cout<<sp-cp;
    }
    else{
        cout<<"loss made : ";
        cout<<cp-sp;
    }
    
    
}