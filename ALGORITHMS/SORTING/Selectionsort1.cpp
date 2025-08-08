 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,7,86,49,22};
    int n=sizeof(arr)/4;
    for (int i = 0; i<n-1; i++){ 
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int c =arr[j];
            arr[j]=arr[i];
            arr[i]=c;
            }  
        } 
    }
       for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    
}
