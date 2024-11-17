#include <bits/stdc++.h>
using namespace std;
int main(){
    int m ,n;
    cout<<"Enter numbers of rows: ";
    cin>>m;
    cout<<"Enter numbers of columns: ";
    cin>>n;
    int arr1[m][n];
     for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cin>>arr1[i][j];
        }
      }
      int arr2[n][m];
        for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            arr2[i][j]=arr1[j][i];
        }
      }
       for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
         }
}