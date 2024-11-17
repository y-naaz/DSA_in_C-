#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){//&a will give different result
    a[0]=100;
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(7);
    change(v);
    for(int i=0; i<2;i++){
             cout<<v[i];
    }
    return 0;
}