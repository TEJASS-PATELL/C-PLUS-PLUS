#include<iostream>
using namespace std;
class c2;
class c1{
    int c1value;
    public:
    void indata(int a){
        c1value = a;
    }
    void dispaly(void){
        cout<<c1value<<endl;
    }
    friend void exchange(c1 &,c2 &);
}x;

class c2{
    int c2value;
        public:
    void indata(int b){
        c2value = b;
    }
    void dispaly(void){
        cout<<c2value<<endl;
    }
    friend void exchange(c1 &,c2 &); // reference object-> call by reference 
}y;

void exchange(c1 &x , c2 &y){
    int temp = x.c1value;
    x.c1value = y.c2value;
    y.c2value = temp;
}
int main(){
    
    x.indata(68);
    y.indata(85);

    exchange(x,y);

    cout<<"The value of x after exchanging become : ";
    x.dispaly();
    cout<<"The value of y after exchanging become : ";
    y.dispaly();

}