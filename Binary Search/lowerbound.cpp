#include<bits/stdc++.h>
using namespace std;
int main(){
    //by linear search.
    int x;
    int n ;
    cout<<"Enter range of your array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element: "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"Printing your array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter your element:";
    cin>>x;
    for(int i =0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    }

}