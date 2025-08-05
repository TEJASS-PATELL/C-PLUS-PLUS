    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"No of rows : ";
        cin>>n;
        int m;
        cout<<"No of columns : ";
        cin>>m;
        cout<<"Mo of elements : "<<endl;
        int arr[n][m];
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){ 
            cin>>arr[i][j];
        }
    }
        cout<<"Transpose of matrix : "<<endl;
        for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){ 
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    }