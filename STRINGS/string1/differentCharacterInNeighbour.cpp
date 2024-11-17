#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n =s.length();
    int count=0;
    for(int i = 0;i<n;i++){
        if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
        else if(s[0]!=s[1]) count++;
        else if(s[n-1]!=s[n-2]) count++;
    }
    cout<<count;
    string v= "yasmeen";
    sort(v.begin(),v.end());
    cout<<" "<<v;
}