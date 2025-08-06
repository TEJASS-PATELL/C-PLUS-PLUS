#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;

    public:
     void setid(void){
        cout<<"Enter employee a id : ";
        cin>>id;
        cout<<"Enter employee salary : ";
        cin>>salary;
     }

     void getid(void){
        cout<<"id of this employee is : "<<id<<endl<<"salary of employee is : "<<salary<<endl;
     }
};

int main(){
   
   Employee facebook[4];   // array
                              
   for(int i=0;i<4;i++){
   facebook[i].setid();
   }

   for(int i=0;i<4;i++){
   facebook[i].getid();
}
}