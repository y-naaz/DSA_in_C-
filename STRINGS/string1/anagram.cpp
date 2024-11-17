#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string s,r;
    getline(cin,s);
    getline(cin,r);
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    if(s.compare(r)==0){
        cout<<"Anagram";
    }
    else cout<<"Not an anagram.";
}