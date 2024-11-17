#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    if(b%2==0)
    return pow(a,b/2)*pow(a,b/2);
    else return a*pow(a,(b-1)/2)*pow(a,(b-1)/2);
}
int main(){

    cout<<pow(3,6);
}