#include <bits/stdc++.h>
using namespace std;
int main()
{
    //smallest missing number in a non-negative sorted array.
    //by linear Search.
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
    for(int i =0;i<n;i++){
        if(arr[i+1]>arr[i]+1){
            cout<<"Smallest Positive number is : "<<arr[i]+1;
            break;
        }
    }   
}