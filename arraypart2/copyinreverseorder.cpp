#include <bits/stdc++.h>
using namespace std;
void display(vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}
void reversepart(int j  ,int i,vector<int>&);
int main()
{
   /* vector<int> v{2, 1, 3, 3, 4};
    vector<int> a(v.size());
    display(v);
    for (int i =0; i<v.size(); i++)
    {
       a[i]=v[v.size()-1-i];
    }
    cout<<endl;
    display(a);*/



    //reversing part of an array
    vector<int>v{2,1,3,3,4,5,0,1};
    display(v);
    cout<<endl;
    reversepart(0,4,v);
    display(v);


}
void reversepart( int i ,int j ,vector<int>&v){
    for(;i<j;i++,j--){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}