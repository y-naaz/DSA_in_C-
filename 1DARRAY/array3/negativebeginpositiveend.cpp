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
   cout<<"Enter elements :  ";
   for(int i =0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
   }
 display(v);
 int i =0;
 int j = n-1;
 while(i<j){
    if(v[i]>=0 && v[j]<0){
     int c=v[j];
       v[j]=v[i];
       v[i]=c;
       i++;
       j--;
 }
  else if(v[i]<0)i++;
    else j--;
 }
  display(v);
}