#include<bits/stdc++.h>
using namespace std;

void change(vector<int> a)
{
    a[1] = 9;
}
int main()
{
    /* vector<int> v;
     v.push_back(6);
     v[1]=1;
     v.push_back(9);
     cout<<v[1];*/
    // vector input

    //     cout<<"Enter a number";
    //     int n;
    //     cin>>n;
    //     vector<int>v(n);
    //    cout<<v.size();

    // passing vector to the function.
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    change( v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
}