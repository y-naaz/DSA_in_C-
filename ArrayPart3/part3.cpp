#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1={1,2,3};
    vector<int>v2={1,2};
    vector<int>v3={7,6,8,2};
    vector< vector<int> >v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    for(int i = 0 ;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
           cout<<v[i][j]<<" "; 
        }
        cout<<endl;
    }

}