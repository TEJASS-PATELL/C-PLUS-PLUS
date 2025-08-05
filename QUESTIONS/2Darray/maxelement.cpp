    #include<iostream>
    using namespace std;
    int main(){
        int arr[2][4]={{2,5,3,7},{8,5,4,1}};
        int mx = 0;
    for(int i=0;i<2;i++){ 
        for(int j=0;j<4;j++){ 
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
    }