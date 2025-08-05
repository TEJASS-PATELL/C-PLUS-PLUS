#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{72,84},{37,95},{49,94},{81,88}};
    cout<<"Name"<<"-"<<"RollNo"<<"-"<<"Marks"<<endl;
    cout<<"Tejas"<<"-";
    cout<<"Prince"<<"-";
    cout<<"Aditya"<<"-";
    cout<<"Hemant"<<"-"<<endl;
    for(int i=0;i<4;i++){ 
        for(int j=0;j<2;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}