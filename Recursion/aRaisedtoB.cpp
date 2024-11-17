#include<bits/stdc++.h>
using namespace std;
int pow(int a, int b){
    int power=1;
    if(a==0 && b==0) {cout<<"UNDEFINED BEHAVIOUR...";
    return -1;
    }
    while(b>=1){
        power*=a;
        b--;
    }
    return power;

}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<pow(a,b);
}