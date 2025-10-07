#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int price;
    string brandName;
};

int main(){
    //? we use new keyword to use the heap memory.
    Car *C = new Car;
    C->brandName = "BMW";
    C->name = "BMW-Sedan";
    C->price = 500000;
}