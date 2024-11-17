#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&L,vector<int>&R,vector<int>&v){
    int i = 0;
    int j = 0;
    int k = 0 ;
    int n1=L.size();
    int n2=R.size();
    while( i<n1 && j<n2 ){
        if(L[i]>=R[j]) v[k++]=L[i++];//for increasing order change here L[i]<=R[i]
        else  v[k++]=R[j++];
    }
    if(i==n1){
        while(j<n2){
            v[k++]=R[j++];
        }
    }
    if(j==n2){
        while(i<n1){
            v[k++]=L[i++];
        }
    }
}
void mergeSort(vector<int>&v){
    int n = v.size();

    if(n==1) return;
    
    int  n1 = n/2;
    int n2 = n-n1;
// declaring left and right subarrays.
    vector<int>L(n1);
    vector<int>R(n2);

    //Making two sub-arrays
    for(int i =0;i<n1;i++){
        L[i]=v[i];
    }
     for(int i =0;i<n2;i++){
        R[i]=v[i+n1];
    }
    //Doing magic aka calling merge function for arrays
    mergeSort(L);
    mergeSort(R);
    //Now i am going to merge left and right subarrays.
    merge(L,R,v);
    L.clear();//for array delete a; 
    R.clear();// delete b for array 

}
int main(){
    int arr[]={2,7,1,-3,8,4,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    //creating vectorfrom array 

    vector<int>v(arr,arr+n);

    mergeSort(v);
    //sorted array in decreasing order
    for(int i =0;i<n;i++){
        cout<<v[i];
    }
}