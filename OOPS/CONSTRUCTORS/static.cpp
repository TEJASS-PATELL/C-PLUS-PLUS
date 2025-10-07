#include<iostream>
using namespace std;

class StaticLearn{
    int age;
    string name;
    int balance;
    static int totalCustomer;
    static int totalBalance;   //? belong to class attribute of class accessed without object directly by class name.

    public:
    StaticLearn(int age, string name, int balance){
        this->name = name;
        this->balance = balance;
        this->age = age;
        totalCustomer++;
        totalBalance += balance;
    }

    static void accessStaticVariable(){
        cout<<"Total Members : "<<totalCustomer<<endl;
        cout<<"Total amount of money in bank : "<<totalBalance<<endl;
    }

    void display(){
        cout<<"Account holder : "<<name<<" has "<<balance<<" in his account"<<endl;
    }
};

int StaticLearn::totalBalance = 0;
int StaticLearn::totalCustomer = 0;

int main(){
    StaticLearn S1(21, "Tejas", 50000);
    StaticLearn S2(24, "Anil", 120000);
    StaticLearn S3(22, "Prince", 160000);
    S1.display();
    S2.display();
    S1.accessStaticVariable();
}

