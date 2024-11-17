#include<iostream>
using namespace std;
int main(){
         int n ;
         cout<<"Enter size of an array: ";
         cin>>n;
         int arr[n];
         cout<<"Enter elements: ";
         for(int i=0;i<n;i++){
            cin>>arr[i];
         }
         int sum=0;
         for(int j=0;j<n;j++){
            sum+=arr[j];
         }
         cout<<sum;
    }
