#include <bits/stdc++.h>
using namespace std;
int main()
{
    //largest missing number in a non-negative sorted array.
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

}