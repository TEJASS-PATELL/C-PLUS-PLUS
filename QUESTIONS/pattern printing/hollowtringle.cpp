#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side of rectangle : ";
    cin>>n;
    int m;
    cout<<"enter side of rectangle : ";
    cin>>m;
    for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++){
    if(i==1 || i==4 || j==1 || j==6){
       cout<<"* ";}
     else cout<<"  ";
        
}
cout<<endl;
}
}
