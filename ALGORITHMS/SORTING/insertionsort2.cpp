 #include<iostream>
 using namespace std;
int main(){
    int arr[]={4,6,8,7,86,49,22};
    int n=sizeof(arr)/4;
    for (int i = 1; i<n; i++){
        int j=i;
            while(arr[j]<arr[j-1] && j>0){
            int c =arr[j-1];
            arr[j-1]=arr[j];
           arr[j]=c;
           j--;
            }  
        } 
       for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}