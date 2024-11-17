#include<bits/stdc++.h>
using namespace std;
void TOH(int n , char s, char a, char d){
    if(n==1){
        cout<<"Move disc "<<s<<" to "<<d<<endl;
    }
    else{
        TOH(n-1,s,d,a);
        cout<<"Move disc "<<s<<" to "<<d<<endl;
        TOH(n-1,a,s,d);
       
    }
}
int main(){
    int n =4;
    TOH(n,'S','A','D');
}