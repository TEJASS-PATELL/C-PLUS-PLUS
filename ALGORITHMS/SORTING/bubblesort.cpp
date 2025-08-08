 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,7,86,49,22,67,1};
    int n=sizeof(arr)/4;
    // bubble shot
    for(int i=0;i<n;i++){
    for (int i = 1; i<n; i++){
            if(arr[i]<arr[i-1]){
            int c =arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=c;
            }  
        } 
    }
       for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    
}