#include<iostream>
using namespace std;
int main(){//to search if input  element is inside array or not.
         int n ;
         cout<<"Enter size of an array: ";
         cin>>n;
         int arr[n];
         cout<<"Enter elements: ";
         for(int i=0;i<n;i++){
            cin>>arr[i];
        
         }
         int a;
        cout<<"Enter element to be search: ";
        cin>>a;
        // for(int i=0;i<n;i++){//as this code is creating problem  in output of else statement therefor modified version is given below.
        // if(a==arr[i])
        // cout<<"Element is present in array";
        bool found=false;
    for(int i=0;i<n;i++){
         if(a==arr[i])
          found=true;
        }
        //now check marks
        if(found==true) cout<<"present";
        else cout<<"absent";
    }
