 #include<iostream>
 using namespace std;
int main(){
    int arra[5]={4,6,8,3,2}; 
    int arrb[5];
    int n = sizeof(arra)/4;
    for (int i = 0; i <n; i++){
         int x=n-1-i; 
        arrb[i]=arra[x]; 
        cout<<arrb[i]<<" ";
    }
    }

