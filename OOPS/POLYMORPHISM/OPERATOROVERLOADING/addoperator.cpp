#include <iostream>
using namespace std;
class A{
    int a;
public:
    void getdata()
    {
        cout << "Enter any no : ";
        cin >> a;
    }
    void putdata()
    {
        cout << "value : " << a << endl;
    }
    A operator+(A &bb)
    {
        A cc;                             //todo- local object inside operator+
        cc.a = a + bb.a;         // hear the sign matters if sign change answer change aa ka a and bb ka a
        return cc;             //todo- return new object
    }
    // Same for (-),(*)and (/ )
};
int main()
{
    A aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb; //? aa.fun(bb) aa ne call kia hai or bb as a paramete gaya hai. aa.operator+(bb); Yahaan:
                                                                 //* aa → calling object (jisne call kiya)
                                                                 //* bb → argument (parameter ke roop me gaya)
    cc.putdata();
}