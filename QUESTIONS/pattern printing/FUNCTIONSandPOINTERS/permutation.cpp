 #include<iostream>
 using namespace std;
int fact(int x){
int f=1;
  for( int i=1; i<=x; i++){
    f=f*i;
    }
  return f;
}
int main(){ 
    int n;
 cout<<"enter a no : ";
    cin>>n;
     int r;
    cout<<"enter a no : ";
    cin>>r; 
    int a =fact(n); 
    int b =fact(n-r);
    cout<<a/b;
}

