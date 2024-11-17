#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int display(vector<int>a){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){//two pointer method.
   vector<int>v;
   cout<<"size: ";
   int n ;
   cin>>n;
   cout<<"Enter zero and 1 in array: ";
   for(int i =0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
   }
 display(v);
 int i =0;
 int j = n-1;
 while(i<j){
    if(v[i]==1 && v[j]==0){
       v[i]=0;
       v[j]=1;
       i++;j--;
 }
  else if(v[i]==0)i++;
    else j--;
 }
  display(v);
}
