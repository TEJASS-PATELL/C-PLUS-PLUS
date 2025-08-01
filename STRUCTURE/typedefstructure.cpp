#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    typedef struct book{
        char name[60];
        int noofpages;
        float price;
    } something ; 

something A;

    A.noofpages = 60;
    A.price = 150;
    strcpy(A.name,"chemistry");
    
    cout<<A.noofpages<<endl;
    

something B;

    B.noofpages = 60;
    B.price = 150;
    strcpy(B.name,"chemistry");
    
    cout<<B.price;


}