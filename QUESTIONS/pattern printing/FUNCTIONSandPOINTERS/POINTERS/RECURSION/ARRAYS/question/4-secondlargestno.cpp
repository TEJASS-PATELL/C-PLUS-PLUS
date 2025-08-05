 #include<iostream>
 using namespace std;
int main(){
    int arr[]={7,6,8,3,1,2,99};
    int n=sizeof(arr)/4;
      int maximum=arr[0];
    for (int i = 0; i <n; i++){
        maximum=max(maximum,arr[i]);}
       //if(arr[i]>maximum)
      // maximum=arr[i]; // same for minimum element
       int Smaximum=arr[0];
    for (int i = 0; i <n; i++){
        if(arr[i]!=maximum){
        Smaximum=max(Smaximum,arr[i]);
        }
    }
         cout<<Smaximum;
}
