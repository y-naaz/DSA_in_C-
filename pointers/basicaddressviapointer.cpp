#include<iostream>
using namespace std;
int main(){
    int a;
    int* p=&a;
    float b;
    float* q=&b;
    cout<<&a<<endl<<p<<endl;
    cout<<&b<<endl<<q;
}