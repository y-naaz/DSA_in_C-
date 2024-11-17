#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;
    for(int i =1 ; i<=n; i++)
 {cout<<i<<" ";//this will print row number too.
    for(int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;
 }
return 0;
}
