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
    vector<int>a;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
for(int j =v.size()-1;j>=0;j--){
     a.push_back(v[j]);
    }
    for(int k =0;k<v.size();k++){
        cout<<a[k]<<" ";
    }
}
