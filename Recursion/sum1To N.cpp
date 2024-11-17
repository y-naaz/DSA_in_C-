#include<bits/stdc++.h>
using namespace std;
void sum(int summ , int n){
    if(n==0) return ;
    sum(summ+n,n-1);
}
int main(){
    int n ;
    cin>>n;
    int summ=0;
    sum(summ,n);
}