#include<iostream>
using namespace std;
int main(){
    int arr[]={2,43,67,98};
    int*ptr=arr;//giving address
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr[0]<<endl;
    for(int i =0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    ptr=arr;
    *ptr=8;
    cout<<*ptr<<endl;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i =0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;
    }


}