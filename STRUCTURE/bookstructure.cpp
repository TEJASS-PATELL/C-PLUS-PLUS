#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    struct book{
        char name[60];
        int noofpages;
        float price;
    } A,B,C; 
    A.noofpages = 60;
    A.price = 150;
    strcpy(A.name,"chemistry");
    
    cout<<A.noofpages;

}

