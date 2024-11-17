#include<iostream>
#include<vector>
using namespace std;
int main(){
//Find the last occurrence of x in array.
vector<int>v(7);
cout<<"enter";
for( int i=0;i<7;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for( int i=0;i<7;i++){
  cout<<v[i];
}

}