#include<iostream>
using namespace std;
int count = 0;
class demo{ 
    
    public: 
    demo(){
        count++;
                  cout<<"The no of object created : "<<count<<endl;
    }
    ~demo(){
        count--;
                  cout<<"The no of object destroyed: "<<count<<endl;
    }
};
int main(){
    demo aa,bb,cc;
    {
        demo dd;
    } // after that the object goes out of scope the destructor start working automatically 
} // after dd object got destroyed then cc,bb,aa object got destroyed .