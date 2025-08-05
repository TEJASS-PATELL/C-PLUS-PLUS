    #include<iostream>
    using namespace std;
    int main(){
        int n;
        int m;
        cout<<"No of rows : ";
        cin>>n;
        cout<<"No of columns : ";
        cin>>m;
        cout<<"no of elements : "<<endl;
        int arr[n][m];
        for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){ 
            cin>>arr[i][j];
        }
         }
        cout<<"Wave pattern : "<<endl;
        for(int j=0;j<m;j++){
            if(j%2==0){
                for(int i=n-1;i>=0;i--){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            else{
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
        }
        }
            
    }