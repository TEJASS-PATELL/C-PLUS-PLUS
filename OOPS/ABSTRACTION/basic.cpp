#include<iostream>
using namespace std;

class Worker{
    private:
    int id;
    int salary;
    string role;
    string name;

    public:
    Worker(int salary, int id, string name, string role){
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->role = role;
    }

    void depositsalary(int salary){
        this->salary += salary;
        cout<<"Your total salary is: "<<this->salary<<endl;
    }
};

int main(){
    Worker W1(90000, 1 , "Tejas", "Software");
    Worker W2(120000, 2 , "Price", "Software developer");
    W1.depositsalary(50000);
    W2.depositsalary(80000);
}