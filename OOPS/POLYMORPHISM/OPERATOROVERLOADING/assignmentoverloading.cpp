#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getdata(){
        cout<<"Enter a no : ";
        cin>>a;
    }
    void putdata(){
        cout<<"The value is : "<<a<<endl;
    }
void operator += (A bb)
{
    a = a+bb.a;
}
};
int main()
{
  A aa,bb; 
  aa.getdata();
  bb.getdata();
  aa+=bb; // Same for -=,*=,/= only sign change....
  aa.putdata();
  bb.putdata(); 
}