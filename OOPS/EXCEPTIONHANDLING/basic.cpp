#include <iostream>
using namespace std;

class InvalidNumber : public runtime_error{

    public:
    InvalidNumber(const string &s) : runtime_error(s){

    }
};   //? we made our default custom throw error


int main()
{
    int a, b, c;
    cout << "Enter two number : ";
    cin >> a >> b;
    try{
        if (b != 0){
            c = a / b;
            cout << "Division of a and b is : " << c;
        }
        else throw InvalidNumber("zero");
    }
    catch (const InvalidNumber &e){
        cout << "Divison is not possible by " << e.what() << " it throw error ";
    }
    catch(const bad_alloc &e){
        cout<<"Memory exception occuss"<<endl;
    }
    catch(...){
        cout<<"Default error";
    }
}


//? if any block of code throw error then further code not run.