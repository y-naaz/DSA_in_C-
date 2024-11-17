#include<iostream>
using namespace std;
int main(){//code for pattern :
/*  1
    13
    135
    1357
*/
    int n;
    cout<<"put height: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        //first i odd number in each row
// int a =1;
//     for(int j=1;j<=i;j++){
//         cout<<a<<" ";
//             a=a+2;
//     } or
for(int j=1; j<=2*i-1;j+=2){  cout<<j<<" ";}
    cout<<endl;
    }
return 0;
}