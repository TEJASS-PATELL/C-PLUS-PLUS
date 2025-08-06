#include<iostream>
using namespace std;

class complex{

    int a;
    int b;

    public:
      // below line means that non member - sumcomplex function is allowed to do anything with my private parts(members)
        friend complex sumcomplex(complex o1 , complex o2);

        void setnumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printnumber(){
            cout<<"Your complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }

}A,B,sum;

// friend function definition
complex sumcomplex(complex o1,complex o2){
        complex o3;
        o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
        return o3;
}
// driver code
int main(){
           A.setnumber(1,2);
           A.printnumber();

           B.setnumber(8,5);
           B.printnumber();

           sum = sumcomplex(A,B);
           sum.printnumber();

}


/* properties of friend functions

1. Not in the scope of class.
2. Since it is not in the scope of class,it cannnot be called from the object of that class.c1.sumcomplex() == invalid.
3. Can be invoked without the help of any object.
4. Usually contains the object as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directely by their names and need object_name.member_name to access any member.

*/ 