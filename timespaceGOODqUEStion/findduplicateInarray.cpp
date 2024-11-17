#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={6,3,2,4,1,7,1,5};
    int n = sizeof(arr);
    vector<int> v(n,0);
    for(int i =0; i < n ;i++){
        if(v[arr[i]]==0) v[arr[i]]=1;
        else {
            cout<<arr[i]<<" is duplicate element";
            break;
        }
    }
}