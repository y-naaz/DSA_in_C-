#include<bits/stdc++.h>
using namespace std;

    int NthFibo(int n ){
        if(n==1||n==2) return 1;
        return NthFibo(n-2)+NthFibo(n-1);
    }
int main(){
    int n;
    cout<<"Enter Nth value: ";
    cin>>n;
    int result=NthFibo(n);
    cout<<result;
}