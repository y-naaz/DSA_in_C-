#include<iostream>
using namespace std;
int main(){
//     int n ;//print alphabet square.
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         /*int a=65;
//         for(int j=1;j<=n;j++){
//             cout<<char(a);
//             a++;
//         }*/
//         for(int j=1;j<=n;j++) {
//             cout<<char(j+64);
//             }
//         cout<<endl;
//     }
int n;
cout<<"Enter a num: ";
cin>>n;
    int a =1;
    for(int i = 0 ;i <n;i++){
        if(i%2==0){
                a=1;
            }
            else a=0;
        for(int j =0;j<i;j++){
            cout<<a;
            a=1-a;
        }
        cout<<endl;
    }
    return 0; 
    }