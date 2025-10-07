#include <iostream>
using namespace std;
class A{
    int x;
    protected:
    string car;
    string put;
    public:
    int s;
    public:
    A(string car, string put){
        this->car = car;
        this->put = put;
    }
    void input(){
        cout << "Enter no x : ";
        cin >> x;
    }
    int getX(){
        return x;
    }
};
class B : public A{
    int y;
    int value;
    public:
    B(int value, string car, string put) : A(car, put){
        this->value = value;
    }
    void getData(){                 // camelCase
        cout << "Enter no y : ";
        cin >> y;
    }
    void putData()
    {
        cout << "Sum of x and y is : " << getX() + y + s<<endl;
        cout<<"Car: "<<car<<" "<<" Price : "<<put<<" value: "<<value<<endl;
    }
}; // object of derived class are formed

int main(){
    B aa(59, "BMW", "700000");
    aa.input();
    aa.getData();
    aa.s = 90;
    aa.putData();
}