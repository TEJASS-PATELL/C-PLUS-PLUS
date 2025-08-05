 #include<iostream>
 using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
 //   int m=sizeof(arr)/4;
    for (int i = 0; i <=n; i++){ 
         cin>>arr[i];
    }   
 for (int i = 0; i <=n; i++){ 
cout<<arr[i]*arr[i]<<" ";
}
}