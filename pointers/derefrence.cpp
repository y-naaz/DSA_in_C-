#include<iostream>
using namespace std;
int main(){
    int a=12;
    int* p=&a;
    cout<<*p<<endl;
    *p=67;
    cout<<a;
}