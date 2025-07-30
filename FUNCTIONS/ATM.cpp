#include<iostream>
using namespace std;
void showmenu(){
    cout<<"*************MENU************"<<endl;
    cout<<"1. Check balance "<< endl;
    cout<<"2. Deposit "<<endl;
    cout<<"3. Withdraw "<<endl;
    cout<<"4. Exit "<<endl;
    cout<<"*****************************"<<endl;
}
int main(){
    int option;
    float balance = 500;
    do{
    showmenu();
    cout<<"Option : ";
    cin>>option;
    system("cls");
    
    switch (option)
    {
    case 1:
        cout<<"The balance is : "<< balance << "$"<<endl;break;
    case 2:
        float deposit;
        cout<<"Cash Deposit : ";
        cin>>deposit;
        balance += deposit;break;
    case 3:
        float Withdraw;
         cout<<"Cash Withdraw : ";
        cin>>Withdraw;
        if(balance >= Withdraw)
        balance -= Withdraw;
        else cout<<"Amount is not enough ";break;
    }
    }
    while(option!=4);
}