#include <bits/stdc++.h>
using namespace std;
int main()
{
    // by using binary  search.
    int x;
    int n;
    cout << "Enter range of your array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: " << i + 1 << " ";
        cin >> arr[i];
    }
    cout << "Printing your array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Enter your element:";
    cin >> x;
    int low = 0;
    int high = n - 1;
   
    //  bool flag=false;
    while(low<=high){
         int mid = low + (high - low) / 2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            // flag=true;
            //for lower bound
            //and for upper bound arr[mid+1]
            break;
        }
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    // if(!flag)
    cout<<arr[high];
}
