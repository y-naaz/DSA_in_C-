#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i = si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<pivotElement) count++;
    }
    int pivotIdx=count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i =si;
    int j =ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<pivotElement)i++;
        if(arr[j]>pivotElement) j--;
        if(arr[i]>pivotElement && arr[j]<pivotElement){
           swap(arr[i],arr[j]);
          i++;
          j--;
         }
    }
    return pivotIdx;
}
int  kthSmallest(int arr[],int si,int ei,int k ){
    // if(si>=ei) return INT_MIN;
    int pi=partition(arr,si,ei);
    if(k==pi+1) return arr[pi];
    if(k<pi+1)
     return kthSmallest(arr,si,pi-1,k);
    else
     return kthSmallest(arr,pi+1,ei,k);
}
int main(){
    int arr[]={2,4,1,3,7,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =2;
    int result=kthSmallest(arr,0,n-1,k);
    cout<<result;
    
}