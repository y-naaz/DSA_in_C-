#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v;
    v.push_back(9);
v.push_back(4);
v.push_back(12);
v.push_back(8);
// cout<<"Value of index 1 is: "<<v[1]<<endl;
// v.at(1)=9;
// cout<<"Updated value of index 1 is: " <<v[1];
for(int i =0;i<v.size();i++){
    cout<<v.at(i)<<endl;
}
cout<<endl; 
sort(v.begin(),v.end());
for(int i =0;i<v.size();i++){
    cout<<v.at(i)<<endl;
}
cout<<endl;
}