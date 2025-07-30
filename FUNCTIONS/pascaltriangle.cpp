#include<iostream>
using namespace std;
int pattern(int x){
    int fact = 1;
    for(int i = 2;i<=x;i++){
        fact = fact*i;
    }
        return fact;
    }
    int main(){
        int n;
        cout<<"Enter n : ";
        cin>>n; 

          for(int i=0;i<=n;i++){
            for(int k=0;k<=n-i+1;k++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
            
        int nfact = pattern(i);
        int rfact = pattern(j);
        int nrfact = pattern(i-j);
    
        int ncr = nfact/(rfact*nrfact);
          
        cout<<ncr<<" ";
            }
                cout<<endl;
    }
    }