// using recursion
// withoutextraparameter
 #include<iostream>
 using namespace std;
void number(int n){
if (n==0) return;
cout<<n<<endl; // base case
number(n-1); // call
cout<<n<<endl; // work
}
int main(){
    int n;
    cin>>n;
    number(n);
}

