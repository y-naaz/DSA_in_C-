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
    vector<int>v1;
    for(int i = 0 ;i<v.size();i++){
        int x =stoi(v[i]);
        v1.push_back(x);
    }
    int maxS=0;
    for(int i =0;i<v1.size();i++){
        if(v1[i]>maxS) maxS=v1[i];
    }
    cout<<maxS;
}