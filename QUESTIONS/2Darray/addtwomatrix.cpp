    #include<iostream>
    using namespace std;
    int main(){
        int arra[2][4]={{2,5,3,7},{7,5,4,1}};
        int arrb[2][4]={{4,5,8,9},{9,1,1,4}};
    for(int i=0;i<2;i++){ 
        for(int j=0;j<4;j++){ 
            cout<<arra[i][j]+arrb[i][j]<<"  ";
        }
        cout<<endl;
    }
    }