#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    typedef struct cricket{
        int age;
        int nooftestmatches;
        float averagerun;
        string firstname;
        string lastname;
    }cricket;
     
     cricket arr[4];
    for(int i=0;i<4;i++){
        getline(cin,arr[i].firstname);
        getline(cin,arr[i].lastname);
        cin>>arr[i].age;
        cin>>arr[i].averagerun;
        cin>>arr[i].nooftestmatches;
      }
        
    for(int i=0;i<4;i++){
        cout<<"Name : "<<arr[i].firstname;
        cout<<arr[i].lastname<<endl;
        cout<<"Age : "<<arr[i].age<<endl;
        cout<<"Average : "<<arr[i].averagerun<<endl;
        cout<<"Match : "<<arr[i].nooftestmatches;
    
      }
}