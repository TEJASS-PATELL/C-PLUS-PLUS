 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,3,2}; // declaration+initialization
        int n=sizeof(arr)/4;
    for (int i = 0; i <n; i++){ 
        cout<<arr[i]<<" ";
    }
}