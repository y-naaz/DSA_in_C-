#include<iostream>
#include<climits>
using namespace std;
int main(){//maximum value out of all elements in  an array.
         int n ;
         cout<<"Enter size of an array: ";
         cin>>n;
         int arr[n];
         cout<<"Enter elements: ";
         for(int i=0;i<n;i++){
            cin>>arr[i];

            
         } 
         int max=INT_MIN;//or int max=INT_MIN;
         for (int i=0;i<n;i++)//then for loop will become for(int i=0;i<n;i++) alsoadd #include<climits>
         {
            if(max<arr[i]) 
            {max=arr[i];}
         }
         int max2=INT_MIN;
         for(int i=0;i<n;i++){
            if(arr[i]>max2&&arr[i]!=max) max2=arr[i];
         }
       cout<<max2;
    }