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
    while(ss>>temp){
        cout<<temp<<endl;
    }

}