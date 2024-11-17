#include<iostream>
#include<vector>
#include<math.h>
using namespace std;//Rotate the given array 'a' by k steps where k is non negative . note k can be greater than as well where n is size of array 'a'.
//for k =3;
    int display(vector<int>a){
for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;  return 0;
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
    int n = v.size();
    int k = 20;
    if(k>n) k=k%n;//for k is greater than size of array.
     display(v);
     revpart(0,n-1-k,v);
     revpart(n-k,n-1,v);
     revpart(0,n-1,v);
     display(v);
}