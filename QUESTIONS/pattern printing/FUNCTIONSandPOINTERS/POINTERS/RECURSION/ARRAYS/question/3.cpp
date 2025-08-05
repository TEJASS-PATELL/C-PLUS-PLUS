 #include<iostream>
 using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,8,9};
    int n=sizeof(arr)/4;
    int sumofeven=0;
    int sumofodd=0;
    for (int i = 0; i < n; i++){ 
        if(i%2==0){
        sumofeven+=arr[i];
        }
        else(i%2!=0);{
        sumofodd+=arr[i];
        }
}
cout<<"X : "<<sumofeven<<endl;
cout<<"Y : "<<sumofodd<<endl;
cout<<"Z : "<<sumofeven-sumofodd;
}