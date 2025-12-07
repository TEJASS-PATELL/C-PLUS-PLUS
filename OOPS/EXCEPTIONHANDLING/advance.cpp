#include <iostream>
#include<exception>
using namespace std;
int main()
{
    try{
        int *p = new int[1000000];
        cout<<"Memory allocation succesfull!!"<<endl;
        delete []p;
    }
    catch(const bad_alloc &err){
        cout<<"Exception error occurs due to line no 7 : "<<err.what()<<endl;
    }
}

//? Keyword	              Meaning
// try	       Code block jaha error (exception) ho sakta hai
// throw	   Error (exception) ko raise karta hai
// catch	   Exception handle karta hai (error ka solution ya message deta hai)