#include<iostream>
using namespace std;

class Employee{

      int id;
      static int count; 

    public:
    
      void setdata(void){
      cout<<"Enter the id : ";
      cin>>id;
      count++;
      }

      void getdata(void){
      cout<<"The id of the employee is : "<<id<<" and this is employee number "<<count<<endl;
      }

      static void getcount(void){
      // cout<<id; // throws an error because static function only access static function
        cout<<"The value of count is : ";
        cout<<count<<endl;

      }
}harry,rohan,soham;

int Employee :: count; // Default value is 0 and hear we can define count

int main(){
        //   harry.id = 1;
        //  harry.count = 1; can not do this as id and count are private

         harry.setdata();
         harry.getdata();
         Employee::getcount();

         rohan.setdata();
         rohan.getdata();
         Employee::getcount();

         soham.setdata();
         soham.getdata();
         Employee::getcount();
}