#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>a){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void revpart( int i,int j,vector <int>&a){
    for(;i<=j;i++,j--)
    {
        int c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
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
     display(v);
     revpart(0,4,v);
     display(v);
}
