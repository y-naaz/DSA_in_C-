#include<bits/stdc++.h>
using namespace std;
void removeOne(    vector<int>&ans,vector<int>&v, int idx){
    if(idx==v.size()) {
        for(int i = 0 ;i<ans.size();i++){
            cout<<ans[i];
        }
        return;
    }
    if(v[idx]==1) removeOne(ans,v,idx+1);
    else{
        ans.push_back(v[idx]);
        removeOne(ans,v,idx+1);
    }
}
int main(){
    vector<int>v={1,2,3,1,1,5,1,8};
    vector<int>ans;
    removeOne(ans,v,0);
}