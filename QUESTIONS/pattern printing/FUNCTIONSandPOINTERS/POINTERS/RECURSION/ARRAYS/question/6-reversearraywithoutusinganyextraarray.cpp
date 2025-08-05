 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,3,2,9};
    int n=sizeof(arr)/4; 
    // reverse
    int i=0;
    int j=n-1;
    while(i<j){        
       int c =arr[i];
        arr[i]=arr[j];  
        arr[j]=c;
        i++;
        j--;           
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }