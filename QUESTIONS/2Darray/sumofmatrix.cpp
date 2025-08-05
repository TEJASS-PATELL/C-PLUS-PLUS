    #include<iostream>
    using namespace std;
    int main(){
        int n;
        int m;
        cout<<"No of rows: ";
        cin>>n;
        cout<<"No of columns: ";
        cin>>m;
        cout<<"No of element: "<<endl;
         int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>arr[i][j];
            }
            }
            int sum=0;
             for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
             }
             cout<<"sum of all element of the matrix is: "<<sum;
    }


    