#include<bits/stdc++.h>
using namespace std;
void removeChar( string str,int idx){
    if(idx==str.size()) return ;
    if(str[idx]!='a') cout<<str[idx];
    removeChar( str , idx+1);
}
void removeChar2(string ans, string original){
    if(original.length()==0) {
      
       cout<< ans;
       return;
    }
    char ch= original[0];
    if(ch=='a') return   removeChar2(ans,original.substr(1));
    else return   removeChar2(ans+ch,original.substr(1));
}
int main(){
    string s = "Raghav Garg";
    for(int i =0;i<s.size();i++){
        if(s[i]!='a' && s[i]!='A') cout<<s[i]; 
    }
    cout<<endl;
    removeChar(s,0);
    cout<<endl;
removeChar2("",s);
}