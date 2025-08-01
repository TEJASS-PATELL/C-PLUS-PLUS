#include<iostream>
using namespace std;
    void printnumber(int* x){
        cout<<*x<<endl;
    }
    void printletter(char* y){
        cout<<*y<<endl;
    }
    void print(void* z,char type){
        switch (type){
        case 'i':// handle int* 
        cout<<*((int*)z)<<endl; break;
        case 'c': //handle char*
        cout<<*((char*)z)<<endl; break; 
        case 'd'://handle double*
        cout<<*((int*)z)<<endl; break;
        }
    }
int main(){
    int number = 4;
    char letter = 'a';
    printletter(&letter);
    printnumber(&number);
    
    print(&number,'i');
    print(&letter, 'c');

}