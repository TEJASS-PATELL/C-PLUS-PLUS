#include<iostream>
using namespace std;
void change(int* ptr){   //! pass by reference using pointers. 
    *ptr = 20;
}
int main(){
    int a = 10;
    change(&a);
    cout<<"Change value of a : "  << a;
}
// void change(int &b){   //! pass by reference using alias. 
//     b = 20;
// }
// int main(){
//     int a = 10;
//     change(a);
//     cout<<"Change value of a : "  << a;
// }