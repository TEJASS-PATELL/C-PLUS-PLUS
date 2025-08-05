 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,8,6,4,};
    int n=sizeof(arr)/4;
    for (int i = 0; i <n; i++){ 
        if(arr[i]==arr[n-i-1])
        cout<<"YES IT IS PALINDROME";
        break;
    }
    }
