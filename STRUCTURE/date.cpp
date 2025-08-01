  #include<iostream>
  #include<string.h>
  #include<algorithm>
  using namespace std;
  int main(){
  typedef struct date{
  int date;
  int month;
  int year;
  }date;
   
   date A,B;
   A.date  = 17;
   A.month = 1;
   A.month = 2004;

   B.date = 17;
   B.month = 10;
   B.year = 2023;

   if(A.date==B.date)
   cout<<"Date are same.";
   else cout<<"Date are not same.";
  }