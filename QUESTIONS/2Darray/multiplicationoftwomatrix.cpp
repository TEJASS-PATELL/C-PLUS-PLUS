#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no : ";
    cin>>n;
    cout<<"Enter the columns no : ";
    cin>>n;
    int m;
    cout<<"Enter the row no : ";
    cin>>m;
    cout<<"Enter the columns no : ";
    cin>>m;
    int arr[n][n];
    cout<<"Enter a matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    } 
    int brr[m][m];
    cout<<"Enter a matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
    // multiplying
    int t=n; // jo row no and column no comman hai
    int res[n][n];
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // i row of all[][] and j column of b[][]
            // (a[i][0],[i][1],[i][2]......)*(b[0][j],b[1][j],b[2][j].....)
           res[i][j]= 0;
          for(int k=0;k<n;k++){
         res[i][j]+=arr[i][k]*brr[k][j];
          }
        }
}
    cout<<"Multiplication of matrix : "<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
             cout<<endl;
        }
}