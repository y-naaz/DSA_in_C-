#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int c=a;
    a=b;
    b=c;
   
}
int main(){
   int x,y;
   cout<<"enter values: ";
   cin>>x>>y;
   swap(x,y);
   cout<<x<<" "<<y;
}