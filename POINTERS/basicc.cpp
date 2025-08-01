#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << &a << endl;
    cout<< *(&a)<<endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;                   //? * = Dereference operator
    cout << ptr2 << endl;
    cout << **ptr2 << endl;
    cout << &ptr2 << endl;
}