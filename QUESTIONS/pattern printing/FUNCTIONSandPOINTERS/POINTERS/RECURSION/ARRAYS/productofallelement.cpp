 #include<iostream>
 using namespace std;
int main(){
    int arr[]={7,6,8,3,1,};
    int prod = 1;
    int n=sizeof(arr)/4;
    for (int i = 0; i <n; i++){ 
         prod = prod*arr[i];
    }
         cout<<prod;
}