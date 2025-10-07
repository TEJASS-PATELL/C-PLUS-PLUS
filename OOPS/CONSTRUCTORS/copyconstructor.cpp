#include <iostream>
using namespace std;
class demo
{
    int x, y;
public:
    demo()
    {
        x++;
        x = 19;
        y = 25;
        x++;
    }
    demo(const demo &z){            //? Copy constructor: initializes current object by copying values from another object (passed by reference)
        x = z.x; // Copy the value of x from z into the new object
        y = z.y; // Copy the value of y from z into the new object
    }

    void getData()
    {
        cout << "The value of x is : " << x << endl;
        cout << "The value of y is : " << y << endl;
    }
} aa, bb(aa);
int main()
{
    aa.getData();
    bb.getData();
}