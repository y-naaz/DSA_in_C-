#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v1{1,4,5,8};
   vector<int>v2{2,3,6,7,10};
   int n=v1.size()+v2.size();
   vector<int>v3(n);
   for(int i =0;i<v1.size();i++){
    if(i<v1.size()) v3[i]=v1[i];
    // else v3[i]=v2[i];//this is incorrect because when i>4 v2[i] will  get distorted...
   }
      for(int i =0;i<v2.size();i++){
        v3[i+v1.size()]=v2[i];
      }
   for(int i =0;i<v3.size();i++){
    cout<<v3[i]<<" ";
   }
   //Now use any sorting algorith and short the array v3;
}