#include<iostream>
using namespace std;
int main(){//the code is for reverse star triangle.
    int n;//below is by me.
    cout<<"Enter height of triangle: ";
    cin>>n;
    /*for(int i =n ; i>=1; i--){
    char ch='*';
    for(int j=1; j<=i;j++){
        cout<<ch;
    }
    cout<<endl;*/
    //by sir is below.
for (int i=1;i<=n;i++){
    for(int j =1;j<=n+1-i;j++){
    cout<<"*";}

    cout<<endl;}
return 0;
}
