    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"No of rows : ";
        cin>>n;
        cout<<"No of columns : ";
        cin>>n; 
        cout<<"no of elements : "<<endl;
        int arr[n][n];
        // INPUT
         for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){ 
            cin>>arr[i][j];
        }
         }
         // SWAP - TRANSPOSE
    for(int i=0;i<n;i++){ 
        for(int j=i;j<n;j++){ 
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //OUTPUT
        cout<<"Transpose of matrix : "<<endl;
        for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){  
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }