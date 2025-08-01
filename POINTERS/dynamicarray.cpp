#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;
    //int Array[size];
    int* Array = new int[size];

    for(int i=0;i<size;i++){
        cout<<"Array [" << i <<"] : ";
        cin>>Array[i];
    }
        for(int i=0;i<size;i++){
       //cout<<Array[i]<<" ";
        cout<<*(Array+i)<<" ";
    }
    delete[]Array;
    Array = NULL;
}