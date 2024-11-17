#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>&v){
   int n =v.size();
    int noz=0;
   int no1=0;
   for(int i=0;i<n;i++){
    if(v[i]==0) noz++;
    else no1++;
   }
   for(int i =0;i<n;i++){
    if(i<noz) v[i]=0;
    else v[i]=1;  }
}
int main(){//two pass method.
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
  for(int i =0;i<n;i++){
    cout<<v[i];}
    sort01(v);
    cout<<endl;
    for(int i =0;i<n;i++){
    cout<<v[i];}
}

