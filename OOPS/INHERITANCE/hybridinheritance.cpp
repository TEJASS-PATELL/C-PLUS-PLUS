#include<iostream>
#include<math.h>
using namespace std;
class A{ 
     protected:
     int x;
     public:
     void getX(){
        cout<<"Enter x : ";
        cin>>x;
     }
};
class B : public A
{
    protected:
    int y;
    int s;
        public:
        void sum(){
        cout<<"Enter y : ";
        cin>>y;
        s = x+y;
        cout<<"Sum of x and y is : "<<s<<endl;
    }        
};
class D{   
    protected:
    int t;
        public:
        void getT(){
        cout<<"Enter t : ";
        cin>>t;
    }        
};
class C : public B,public D
{  
    protected:
    int z;
        public:
        void maximum(){
        cout<<"The maximum value is : "<<max(s,t)<<endl;
    }        
        void power(){
             cout<<"Enter z : ";
             cin>>z;
             cout<<"The power of s to the z is : "<<pow(s,z);
        }
};
int main(){
       B aa;
       C bb;
       bb.getX();
       bb.sum();
       bb.getT();
       bb.maximum();
       bb.power();
}
