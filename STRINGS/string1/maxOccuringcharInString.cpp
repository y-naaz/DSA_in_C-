#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
//all charater in string is in lowercase
int main() {
    string s;
    cout<<"Enter non space lowercase string: ";
    getline(cin,s);
    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii=int(ch);
        arr[ascii-97]++;
    }int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max)max=arr[i];
}
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            char ch=char(i+97);
            cout<<ch<<" "<<max<<endl;
        }
    }

}