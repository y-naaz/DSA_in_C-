#include<iostream>
using namespace std;
int main(){//Count numberof elements in given array greater than a given number x.
         int n ;
         cout<<"Enter size of an array: ";
         cin>>n;
         int arr[n];
         cout<<"Enter elements: ";
         for(int i=0;i<n;i++){
            cin>>arr[i];
         } 
         int x;
         cout<<"Enter a number: ";
         cin>>x;
        //  for(int i =0;i<n;i++){
        //     float c=arr[i]/x;
        //     if(c>1) cout<<arr[i]<<endl;
        //  }
        //or the efficient code is written below.
        int count=0;
        for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
        }
        cout<<count;
    }