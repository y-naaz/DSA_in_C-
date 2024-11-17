#include<iostream>
using namespace std;
int main(){//the code is for number triangle.
    int n;//below is by me.
    cout<<"Enter height of triangle: ";
    cin>>n;int a =0;
    for (int i=1;i<=n;i++){  
    for(int j =1;j<=i;j++){
        a++;
        cout<<a<<" ";
    }
    cout<<endl;}
return 0;
}