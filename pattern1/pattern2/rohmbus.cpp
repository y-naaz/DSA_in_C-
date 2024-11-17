#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of Rhombus: ";
    cin>>n;
   
for(int i =1;i<=n;i++){
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=n;k++){
        cout<<"*";
    }
   /*for(int l=1;l<=n-i;l++){
        cout<<"*";
    }
    for(int m =1;m<=i;m++){
        cout<<" ";
    }*///code can be run without upper commented part if k<=n
    cout<<endl;

}
}
