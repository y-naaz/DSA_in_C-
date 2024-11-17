#include<iostream>
using namespace std;
int main(){
    int x[7]={1,2,3,4,5,6,7};
    for(int i =0;i<=6;i++){
     cin>>x[i];
    }
    for(int j =0;j<=6;j++){
        cout<<" "<<x[j]<<endl;
    }
}