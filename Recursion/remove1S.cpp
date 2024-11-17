#include<bits/stdc++.h>
using namespace std;
void remove1( int arr[],int n , int idx){
    if(idx==n) return ;
    if(arr[idx]!=1) cout<<arr[idx];
    remove1(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,1,1,4,1,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    remove1(arr,n,0);
    
}