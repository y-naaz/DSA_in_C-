#include<bits/stdc++.h>
using namespace std;
//method 1
/*
void printSubset(string ans , string s){
    if(s.length()==0){
        cout<<ans<<"  ";
         return;
    }
        char ch = s[0];
        printSubset(ans+ch,s.substr(1));
        printSubset(ans,s.substr(1));
}
*/
//method 2 as well as storinf ans in string vector.
void printSubset2(string ans, string s , int idx , vector<string>&v){
    if(idx==s.length()){
        v.push_back(ans);
        return;
    }
    char ch = s[idx];
    printSubset2(ans,s,idx+1,v);
    printSubset2(ans+ch,s,idx+1,v);
    
}
int main(){
   // printSubset("","abc");
   vector<string>v;
   printSubset2("","abc",0,v);
   for(int i = 0 ;i<v.size();i++){
        cout<<v[i]<<"  ";
   }
}