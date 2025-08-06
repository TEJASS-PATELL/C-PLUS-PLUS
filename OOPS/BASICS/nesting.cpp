#include<iostream>
#include<string.h>
using namespace std;
class binary{

    string s; 

public:
    void read(void);
    void checkbinary(void);
    void onescompliment(void);
    void display(void);
}a,b,c;

void binary :: read(void){
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: checkbinary(void){
    for(int i=0;i<s.length();i++){
        if (s.at(i) !='0' && s.at(i) !='1'){
        cout<<"Binary formate is incorrect"<<endl;
        return;
    }
    }
}
void binary :: onescompliment(void){
    read();
    checkbinary();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else s.at(i) = '0';
}
}
void binary :: display(void){
    cout<<"Display your binary number : "<<endl;
      for(int i=0;i<s.length();i++){
        cout<<s[i];
}
cout<<endl;
}
int main(){
    // a.read();
    // a.checkbinary();
     a.display();
     a.onescompliment();
     a.display();
}