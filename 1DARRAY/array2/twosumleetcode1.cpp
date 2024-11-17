#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(0);
    v.push_back(1);
    int x=6;
    int v1,v2;
    for(int i =0;i<v.size();i++){
        v1=v[i];
        for(int j =i+1;j<v.size();j++){
            v2=v[j];
            if(v1+v2==x) cout<<i<<" "<<j<<endl;//for printing value use cout<<v1<<" "<<v2<<endl; instead of this line.
        }
     
    }
}