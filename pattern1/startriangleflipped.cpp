#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter height of triangle: ";
    cin>>n;
    for(int i =1 ; i<=n; i++){
//     for(int j=1; j<=n ;j++){
//         if(i+j>n) cout<<"*";
//         else
//         cout<<" ";
//     }
//     cout<<endl;
//  }
// return 0;
//method 2 by sir is below.
for(int j=1;j<=n-i;j++){
    //j<=n+1-i is replace by n-i because we are adding one star in base
    cout<<" ";}
    for(int k =1;k<=i;k++){
        cout<<"*";
    } cout<<endl;}
}
