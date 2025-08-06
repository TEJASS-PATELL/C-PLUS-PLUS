#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void input(){
        cout<<"Enter no : ";
        cin>>a;
    } 
 friend void max(A,B);
}aa; //aa is a object of class A that can access the value of a which is present in the class A with the help of aa.a

class B{
    int b;
    public:
    void getdata(){
        cout<<"Enter no : ";
        cin>>b;
    }
    friend void max(A,B);
}bb; //bb is a object of class B that can access the value of b which is present in the class A with the help of bb.b ;

void max(A aa, B bb){ // when we define friend function the class name and the object name is used like A is class name and aa is object name with the help of object we can access the value of a ->aa.a  
    if(aa.a>bb.b){ //a>b
        cout<<"max no : "<<aa.a;
    }
    else {
cout<<"max no : "<<bb.b;
}
}

int main(){
        aa.input();
        bb.getdata();
        max(aa,bb);
}