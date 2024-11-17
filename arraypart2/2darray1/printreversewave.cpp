#include <bits/stdc++.h>
using namespace std;
int main(){
 int m ,n;
    cout<<"Enter numbers of rows: ";
    cin>>m;
    cout<<"Enter numbers of columns: ";
    cin>>n;
    int arr[m][n];
     for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cin>>arr[i][j];
        }
      }
      for(int i =m-2;i>=0;i-=2){
            int k =0,j=n-1;
            while(k<j){
                     int c=arr[i][k];
            arr[i][k]=arr[i][j];
            arr[i][j]=c;
            k++;
            j--;
        }
      }
       for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
         }
}