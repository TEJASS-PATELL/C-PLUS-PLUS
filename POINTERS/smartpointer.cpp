#include<iostream>
#include<memory>
using namespace std;
class MyClass {
    public:
    MyClass(){
        cout<< "Constructor invoked" <<endl;
    }
    ~MyClass(){
        cout<< "Distructor invoked" <<endl;
    }
};
int main(){
// unique pointer        //! Memory address
unique_ptr<int>unPtr1 = make_unique<int>(25);
//cout<<* unPtr1<<endl;
unique_ptr<int>unPtr2 = move(unPtr1);
cout<<* unPtr2<<endl;
cout<<* unPtr1<<endl;  //* here after giving the address of the value to the pointer second the first pointer become NULL and the exception is found.
}