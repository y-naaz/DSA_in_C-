#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,78,7,6,5,43,2,2,4,5,5,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    cout<<&arr[0]<<endl;
    cout<<&arr[1];
    }
