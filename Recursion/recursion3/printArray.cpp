#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n , int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,++idx);
}
void displayv(vector<int>&v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    displayv(v,++idx);

}
int main(){
    int arr[]={2,3,1,5,8,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i =0;i<n;i++){
        v[i]=arr[i];
    }
    display(arr,n,0);
    cout<<endl;
    displayv(v,0);
}