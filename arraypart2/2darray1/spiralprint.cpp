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
        int minr=0,minc=0;
        int maxr=m-1,maxc=n-1;
        int tne=m*n;
        int count=0;
        while (minr<=maxr && minc<=maxc){
            //print left to right or can say right
            for( int j = minc;j<=maxc && count<tne;j++){
                cout<<arr[minr][j]<<" ";
            }
            minr++;
            //printing now from rightmost top to bottom or can say down
            for( int i = minr;i<=maxr && count<tne;i++){
                cout<<arr[i][maxc]<<" ";
            }
            maxc--;
            //printing bottom to left or can say only towards left
               for( int j = maxc;j>=minc && count<tne;j--){
                cout<<arr[maxr][j]<<" ";
            }
            maxr--;
            // for printing towards up
                for( int i = maxr;i>=minr && count<tne;i--){
                cout<<arr[i][minc]<<" ";
            }
            minc++;
        }
}
