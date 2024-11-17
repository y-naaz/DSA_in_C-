#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
 
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    
}