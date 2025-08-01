#include<iostream>
using namespace std;
// int getmin(int number[],int size){
//     int min = number[0];
//     for(int i=1;i<size;i++){
//         if(number[i]<min)
//         min = number[i];
//     }
//     return min;
// }
// int getmax(int number[],int size){ 
//     int max = number[0];
//     for(int i=1;i<size;i++){
//         if(number[i]>max)
//         max = number[i];
//     }
//     return max;
// }
void getminandmax(int number[],int size,int* min,int* max){
       for(int i=1;i<size;i++){
        if(number[i] > *max)
        *max = number[i];
        if(number[i] < *min)
        *min = number[i];
}
}
int main(){
    int number[5]={4,5,-2,29,3};
    int min = number[0];
    int max = number[0];
    // cout<<"Minimun no is : "<<getmin(number,5)<<endl;
    // cout<<"Maximum no is : "<<getmax(number,5);
    getminandmax(number, 5, &min, &max);
    cout<<"Minimum no is : "<< min <<endl;
    cout<<"Maximum no is : "<< max;
}