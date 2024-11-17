#include<iostream>
using namespace std;
int main(){//the code is for number triangle.
    int n;//below is by me.
    cout<<"Enter height of triangle: ";
    cin>>n;
    //below code is for reverse number triangle by me
    /*for(int i =n ; i>=1; i--){
    for(int j=1; j<=i;j++){
        cout<<j;
    }
    cout<<endl;}*/
    //for reverse number triangle by sir i =1;i<=n and 
    //j=1;j<=n+1-i
    //number triangle by sir.
for (int i=1;i<=n;i++){
    for(int j =1;j<=i;j++){
    cout<<j;}

    cout<<endl;}
return 0;
}