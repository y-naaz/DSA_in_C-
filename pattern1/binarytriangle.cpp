#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"Enter height of triangle: ";
    cin>>n;
    for(int i =1 ; i<=n; i++){
//         if(i%2==0) a=0;
//         else a=1;
    for(int j=1; j<=i ;j++){
//         cout<<a;
//         if(a==0) a=1;
//         else a=0;
//     }
//      cout<<endl;
//     }
// return 0;
//method2:
if((i+j)%2==0) cout<<1;
else cout<<0;
}
cout<<endl;
}}