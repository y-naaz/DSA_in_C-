#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<"\n";
    pair<int , pair<int,int>> q={1,{1,3}};
    cout<<p.first<<" "<<q.second.first<<" "<<q.second.second<<"\n";
    pair<int,int> arr[]={{1,2},{1,3},{2,3}};
    cout<<arr[1].first<<" "<<arr[2].second;
}
void explainVector(){
    vector<int>v(5,10);
    v.emplace_back(30);
    vector<int>v1(v);
    vector<int>::iterator it = v.begin();
    cout<<" "<<*(it)<<" ";
    cout<<v.back();
    
}
int main(){
   // explainPair();
    explainVector();
}
