#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4};
    //Brute force approach
    
    for(int i = 0 ;i<arr.size();i++){
        int pre =1;
        int suf=1;
        for(int j = 0 ;j<i;j++){
            pre*=arr[j];
        }
        for(int k=arr.size()-1;k>i;k--){
            suf*=arr[k];
        }
        arr[i]=pre*suf;
    }
    for(int i = 0 ;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}