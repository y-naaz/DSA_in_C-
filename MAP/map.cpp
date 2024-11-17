#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    pair<string,int>p1;
    p1.first="raghav";
    p1.second=27;
    pair<string,int>p2;
    p2.first="rozy";
    p2.second=23;
    unordered_map<string,int>mp;
    cout<<mp.size()<<endl;
    mp.insert(p1);
    mp.insert(p2);
    for(pair <string,int> p : mp){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    for(auto p : mp){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    mp.erase("raghav");
    mp.erase("rozy");
    cout<<mp.size();

}