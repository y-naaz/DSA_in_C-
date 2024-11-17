#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i  = 0 ; i< n ;i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i <n-1;i++){
        int  minm  = arr[i];
        int min_idx = i ;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<minm){
                min_idx = j ;
            }
        }
    if(min_idx!=i) swap(arr[i],arr[min_idx]);
    }
    for(int i  = 0 ; i< n ;i++){
        cout<<arr[i];
    }
}