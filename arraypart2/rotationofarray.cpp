#include <bits/stdc++.h>
using namespace std;
void display(vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}
void reversepart(int i, int j, vector<int> &v)
{
    for (; i < j; i++, j--)
    {
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int main()
{
    int n, k;
    cout << "Enter size : ";
    cin >> n;
    cout << "Enter times of rotation: ";
    cin >> k;
    vector<int> v;
    cout << "Enter elements of vector";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (k > n)
        k %= n;
    if (k == n)
    {
        display(v);
    }
    else
    {
        reversepart(0, n - k - 1, v);
        reversepart(n - k, n - 1, v);
        reversepart(0, n - 1, v);
        display(v); 
    }
}