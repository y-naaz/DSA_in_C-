#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of strings you want: ";
    cin>>n;
    vector<string>v;
    int i =0;
    while(i<n){
        string s ;
        cout<<"Enter a  number string: ";
        cin>>s;
        v.push_back(s);
        i++;
    }
   
    int maxS=stoi(v[0]);
    string maxs=v[0];
    for(int i =0;i<v.size();i++){
        if(stoi(v[i]) > maxS) {
            maxS=stoi(v[i]);
            maxs=v[i];
        }
    }
    cout<<maxs;
}