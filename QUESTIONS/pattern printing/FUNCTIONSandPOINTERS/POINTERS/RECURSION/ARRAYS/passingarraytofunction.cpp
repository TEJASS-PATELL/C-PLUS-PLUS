 #include<iostream>
 using namespace std;
void change(int arr[]){
    arr[0]=1;
}
int main(){
    int arr[5]={4,6,8,3,2}; 
   for (int i = 0; i <=4; i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for (int i = 0; i <=4; i++){ 
        cout<<arr[i]<<" ";
    }
}