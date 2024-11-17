#include<iostream>
using namespace std;
 void display(int* a,int n){//given code is not able to update the value of array element through function,when i am taking all the input from user.
   
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void change(int b[],int n){//int b[]=int*b
    int a;
    cout<<"enter a number to put: ";
    cin>>a;
     b[0]=100;
}
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n]; 
     cout<<"Enter elements of the array";
   display(arr,n);
   change(arr,n);
   display(arr,n);

// void display(int a[]){//i am using int*a in placeof int a[] and both are correct.
//     for(int i =0;i<5;i++){
//         cout<<a[i]<<" ";
//     }cout<<endl;
// }
// void change(int b[]){
//     b[0]=100;
// }
// int main(){
//     int arr[]={1,4,2,7,46};
//     display(arr);
//     change(arr);
//     display(arr);
}