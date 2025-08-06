#include <iostream>
#include <string.h>
using namespace std;
class shop{

    int itemid[100];
    int itemprice[100];
    int counter;

public:  
    void initialcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);

} A;
void shop ::setprice(void)
{
    cout << "enter id of your item : " <<counter+1<<endl;
    cin >> itemid[counter];
    cout << "enter item price : " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id no " << itemid[i] << " is : " << itemprice[i]<<endl;
    }
}
int main()
{
    A.initialcounter();
    A.setprice();
    A.setprice();
    A.setprice();
    A.displayprice();
}