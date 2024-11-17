#include<iostream>
#include<vector>
using namespace std;
int main(){//Array met5hod of taking input.
    /* vector<int>v(5);//if we will ommit size here and write v(); it will give error.
    cout<<"Enter elements of vector: ";
    for(int i =0;i<5;i++){
        cin>>v[i];
    }
    cout<<"\n Vector is: ";
    for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }*/
    //proper method of taking input.
   /*vector<int>v;
    cout<<"Enter initial size of vector: ";
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);}
        for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }*/
    vector<int>v;
    v.push_back(9);
v.push_back(4);
v.push_back(8);
v.push_back(12);
cout<<"Value of index 1 is: "<<v[1]<<endl;
v.at(1)=9;
cout<<"Updated value of index 1 is: " <<v[1];
}