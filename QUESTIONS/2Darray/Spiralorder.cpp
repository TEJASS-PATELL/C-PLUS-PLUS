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
         int minr = 0;
         int maxr = n-1;
         int minc = 0;
         int maxc = m-1;
         int tne = m*n;
         int count = 0;
         cout<<"SPIRAL MATRIX : "<<endl;
        while(count<tne){
            // print the minimum row
            for(int j=minc;j<=maxc;j++){
                cout<<arr[minr][j]<<" ";
                count++;
            }
            minr++;
            if(count>=tne) break;
           // print the maximum column
              for(int i=minr;i<=maxr;i++){
                cout<<arr[i][maxc]<<" ";
                count++;
            }
            maxc--;
            if(count>=tne) break;
           // print the maximum row reverse
              for(int j=maxc;j>=minc;j--){
                cout<<arr[maxr][j]<<" ";
                count++;
            }
            maxr--;
            if(count>=tne) break;
           // print the minimum column reverse
              for(int i=maxr;i>=minr;i--){
                cout<<arr[i][minc]<<" ";
                count++;
            }
            minc++;
        }
    }