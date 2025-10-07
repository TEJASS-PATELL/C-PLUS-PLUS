#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;
    public:
    Human(){
        cout<<"Human constructor"<<endl;
    }
    void print(){
        cout<<"Human name is : "<<name<<" and its age is : "<<age<<endl;
    }
};

class Student : public virtual Human{
    protected:
    string branch;
    public:
    Student(){
        cout<<"Student constructor"<<endl;
    }
    void printS(){
        cout<<"Student branch is : "<<branch<<endl;
    }
};

class Player : public virtual Human{
    protected:
    string sport;
    public:
    Player(){
        cout<<"Player constructor"<<endl;
    }
    void printP(){
        cout<<"Player sport is : "<<sport<<endl;
    }
};

class C : public virtual Student, public virtual Player{
    int gender;
    public:
    C(string sport, string branch, string name, int age){
        this->gender = gender;
        this->name = name;
        this->branch = branch;
        this->sport = sport;
        cout<<"C constructor"<<endl;
    }
};

int main(){
    C a1("FootBall", "CSE", "Tejas", 21);
    a1.print();
    a1.printP();
    a1.printS();
}
