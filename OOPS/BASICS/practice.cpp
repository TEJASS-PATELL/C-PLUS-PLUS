#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int rollNo;
};

int main(){
    Student s1;
    s1.name = "Tejas";
    s1.id = 1;
    s1.rollNo = 72;

    cout<<"Id of student is : " <<s1.id<<" and name of student is : "<<s1.name;
}