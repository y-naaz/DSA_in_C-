#include<bits/stdc++.h>
using namespace std;
int fibo(int n ){
 return (n==1|| n==2) ? 1:  fibo(n-1)+fibo(n-2);
}
int main(){
    int n ;
    cout<<"Enter the Nth value:";
    cin>>n;
    cout<<fibo(n);
}