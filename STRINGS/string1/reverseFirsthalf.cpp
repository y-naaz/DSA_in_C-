#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cout<<"Enter even length of a string: ";
    cin>>n;
    if(n%2!=0){
        cout<<"Wrong input returning................";
        return 0;
    }
    else{
    string s;

    cout<<"Enter  string character: ";
    for(int i =0;i<n;i++){
        char ch;
        cin>>ch;
        s.push_back(ch);
    }
    n=n/2;
    reverse(s.begin(),s.begin()+n);
    cout<<s;
}  
}