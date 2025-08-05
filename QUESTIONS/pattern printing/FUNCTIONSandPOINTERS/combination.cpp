 #include<iostream>
 using namespace std;
 // int main(){
//       int n;
//     cout<<"enter a no : ";
//     cin>>n;
//      int r;
//     cout<<"enter a no : ";
//     cin>>r;
//  int a=1;
//   for( int i=1; i<=n; i++){
//     a=a*i;
// }
// int b=1;
//   for( int i=1; i<=r; i++){
//     b=b*i;
// }
//   int c=1;
//   for( int i=1; i<=(n-r); i++){
//     c=c*i;
//   }
//   int x=a;
//   int y=(b*c);
//   cout<<x/y;

// }
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
    int b = fact(r);
    int c =fact(n-r);
    cout<<a/(b*c);
}

