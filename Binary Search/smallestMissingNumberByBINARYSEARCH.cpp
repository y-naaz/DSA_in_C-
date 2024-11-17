#include <bits/stdc++.h>
using namespace std;
int main()
{
    //smallest missing number in a non-negative sorted array.
    //by Binary  Search.
    int x;
    int n;
    cout << "Enter range of your array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a +ve element: " << i + 1 << " ";
        cin >> arr[i];
    }
    cout << "Printing your array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }
    int low=0;
    int high=n-1;
    int ans=-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans=mid;
            bool flag=true;
            high=mid-1;
        }
    }
    if(flag==true){
    cout<<"Missing element is: "<<ans;
    }
    else cout<<"No missing element."  ;  
}