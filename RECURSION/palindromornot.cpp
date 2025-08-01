#include<iostream>
using namespace std;
bool palindrom(int i ,string S){
    if(i>=S.length()/2)
    return true;
    if(S[i]!=S[S.length()-i-1]);
        return false;
    return palindrom(i+1 , S);
}
int main(){
    cout<<"Enter string : ";
    string S = "MADAM";
    cout<<" "<<S<<endl;
    cout<<"Enter string size : "<<S.length()<<endl;
    cout<<"TRUE/FALSE : "; // 0 = TRUE , 1 = FALSE
    cout<<palindrom(0,S);
}