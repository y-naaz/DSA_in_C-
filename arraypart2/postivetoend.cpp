#include <bits/stdc++.h>
using namespace std;
int main()
{
      vector<int>v{1,-2,3,-4,-5,6,8};
    int i=0,j=v.size()-1;
    //move all negative number to starting and positive number to the end.
    //two pointer method
    while(i<j){
            if(v[i]>0 && v[j]<0){
                int c=v[i];
                v[i]=v[j];
                v[j]=c;
                i++;
                j--;
            }
            else if(v[i]<0) i++;
            else j--;
    }
      for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}