#include<iostream>
using namespace std;
void introduce(string name, string city, int age = 18){
     cout<<"My name is "<<name<<" I live in the city name "<<city<<" and my age is "<<age<<" years"<<endl;
}
int main(){
    string name , city;
    int age;
    cout<<"Name : ";
    cin>>name;
    cout<<"City : ";
    cin>>city;
    cout<<"Age : ";
    cin>>age;
    introduce(name,city,age);
    introduce("Prince", "Lucknow");
}