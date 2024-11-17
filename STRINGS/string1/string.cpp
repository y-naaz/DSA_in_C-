#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter length of a string: ";
    cin>>n;
    char str[n];

    cout<<"Enter  string character: ";
    for(int i =0;i<n;i++){
    cin>>str[i];
    }
    int count=0;
    for(int i = 0 ; i <n;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'|| str[i]=='u'){
            count++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    cout<<count;
}