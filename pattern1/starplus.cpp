#include<iostream>
using namespace std;
int main(){
    int n ;//print alphabet square.
    cout<<"Enter an odd number: ";
    cin>>n;
    for(int i =1;i<=n;i++){//or int  mid =n/2+1; and proceed.
        for(int j=1; j<=n;j++){
            if((i==(n/2)+1)||(j==(n/2)+1))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
