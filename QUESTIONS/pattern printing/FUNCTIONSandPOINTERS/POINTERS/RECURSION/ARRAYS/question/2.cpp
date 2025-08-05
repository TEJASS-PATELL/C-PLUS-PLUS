 #include<iostream>
 using namespace std;
int main(){
    int x;
    cout<<"enter x : ";
    cin>>x;
    int count = 0;
    int arr[]={1,9,3,79,50,5,6};
    int n=sizeof(arr)/4;
    for (int i = 0; i <n; i++){ 
        if(arr[i]>x){
        count++;
}
}
    cout<<count;
}
