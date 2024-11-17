#include<iostream>
using namespace std;
int main(){
    int x[7]={1,2,3,4,5,6,7};
    x[5]=9;
    cout<<x[5]<<endl;
    int arr[]={8,11,12,76};
    cout<<arr[2]<<endl;
    //if you have to print all elements of array then loop lagega
    for(int i =0;i<=6;i++){
        cout<<x[i]<<" ";
    }
}