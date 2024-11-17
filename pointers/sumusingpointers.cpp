#include<iostream>
using namespace std;
int main(){
    // int a=5,b=7;
    // int* p=&a,*q=&b;
    // int sum=*p + *q;
    // cout<<sum;
    int x,y;
    int* p=&x;
    int* q=&y;
    cout<<"Enter values: ";
    cin>>*p>>*q;
    cout<<"result by pointer is: "<<*p+*q<<endl;
    cout<<"simply adding: "<<x+y;
}