#include<iostream>
using namespace std;
void fun(int a,int b){
    int s;
    s=a;
    a=b;
    b=s;
 cout<<a<<endl;
 cout<<b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter value of two  numbers: ";
    cin>>a;
    cin>>b;
 fun(a,b);
 return 0 ;
}