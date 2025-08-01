#include<iostream>
using namespace std;
int count = 0;
void function(){
    if(count == 5)
    return;
    cout<<count<<" ";
    count++;
    function();
    }
int main(){
    function();
}
