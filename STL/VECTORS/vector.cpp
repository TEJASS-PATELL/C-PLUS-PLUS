#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// void printvec(vector<int> V){
//     cout<<"Size : "<<V.size()<<endl;
//     for(int i = 0;i<V.size();i++){
//         cout<<V[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//        vector<int> V;
//        int n;
//        cin>>n;
//        for (int i = 0; i < n; i++){
//         int x;
//         cin>>x;
//        V.push_back(x); // o(1)
//        }
// printvec(V);
// }
int main(){
    vector<int> number;
    number.push_back(1);

    for(int i=0;i<10;i++){
        number.push_back(i);
    }
    // for(int x : number)
    // cout<<x<<endl;
    for(auto it=number.begin();it!=number.end();it++){
       // cout<<it<<endl; //! We canot print iterator directely.
       cout<<*it<<endl;     //* It print the value of it as it store the value in pointer, we can print the iterator with the help of pointers.
       cout<<&it<<endl;    //? In this case it print the address of the iterator.
       cout<<&(*it)<<endl;     //? In this case it print the address of the first vector element to last vector element.
    }
}