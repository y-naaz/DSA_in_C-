#include<iostream>
using namespace std;
int main(){//the code is number rectangle of repetion
    /*int n,m;
    cout<<"Enter height of rectangle: ";
    cin>>n;
    cout<<"Enter width of rectangle";
    cin>>m;
    for (int i=1;i<=n;i++){
    for(int j =1;j<=m;j++){
    cout<<i;}

    cout<<endl;}*/
    //code for repetive number triangle.
    int n;
    cout<<"put height: ";
    cin>>n;
    for (int i=1;i<=n;i++){
    for(int j =1;j<=i;j++){
    cout<<i;}
    cout<<endl;
    }
return 0;
}