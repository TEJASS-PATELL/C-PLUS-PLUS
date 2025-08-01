#include<iostream>
using namespace std;
int main(){
    int x[5] = {2,3,4,5,6};

cout<<x<<endl;
cout<<&x[0]<<endl;
cout<<x[2]<<endl;          //! Line 8 and line 9 works same and give same result.
cout<<*(x + 2)<<endl;
cout<<(x + 2)<<endl;

for(int i=0;i<5;i++){
    cout<<"Number : ";
    cin>>x[i];
}
for(int i=0;i<5;i++){
    cout<<"Address of index "<< i <<" is = "<<(x+i)<<" and the ";
    cout<<"Value of address at index "<< i <<" is = "<<*(x+i)<<", ";
}
}