#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    bool flag=false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid - 1]!= x)
            {
                flag=true;
               cout<<mid;
                break;
            }
            else{
                high=mid-1;
            }

     
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;      
    }
    if(flag==false) cout<<-1;
}
