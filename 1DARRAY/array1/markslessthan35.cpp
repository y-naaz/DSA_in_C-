#include<iostream>
using namespace std;
int main(){
    int n;
    float a;
    cout<<"Enter number of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks : ";
    for(int i =0;i<=n-1;i++){
        cout<<"Enter marks : ";
     cin>>marks[i];
    }
    for(int j =0;j<=n-1;j++){
        if(marks[j]<35) cout<<"The roll number for marks "<<marks[j]<<" is: "<< j<<endl;
        else cout<<"marks "<<marks[j]<<" is pass"<<endl;
    }
}