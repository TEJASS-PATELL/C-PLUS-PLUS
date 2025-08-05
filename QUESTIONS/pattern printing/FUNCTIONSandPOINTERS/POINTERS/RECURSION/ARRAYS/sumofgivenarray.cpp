 #include<iostream>
 using namespace std;
int main(){
    int arr[]={7,6,8,3,1,2};
    int sum = 0;
    int n=sizeof(arr)/4;
    for (int i = 0; i <n; i++){ 
         sum = sum+arr[i];
    }
         cout<<sum;
}