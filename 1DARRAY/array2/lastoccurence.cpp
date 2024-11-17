#include<iostream>
#include<vector>
using namespace std;
int main(){//Find the last occurence of x in given array.
    vector<int>v{4,4,3,4,5,6,4,5,9};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }int x;
    cout<<"Enter the number to check: ";
    cin>>x;
    int indx=0;
    for(int i =v.size();i>0;i--){//this is efficient code
        if(v[i]==x){ indx=i;
        break;}
        else indx=-1;
    }
    //if we will move from front code is given below.
//     for(int i =0;i<v.size();i++){
//         if(x==v[i]){ indx=i;}
//      //else {indx=-1;}// why else statement is giving wrong answer. because else stament lagaate hi vhi p  loop terminate ho jaa rhaa hai.
//     }
cout<<indx;
}