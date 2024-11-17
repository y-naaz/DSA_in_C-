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
        int i =0;
        int j = (v.size()-1);
        while(i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        //by using for loop
        // for(int i =0, j=v.size()-1;i<=j;i++,j--){
        //     int c=v[i];
        //     v[i]=v[j];
        //     v[j]=c;
        // }
        display(v);
}
