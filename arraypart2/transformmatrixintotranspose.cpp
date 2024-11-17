#include <bits/stdc++.h>
using namespace std;
int main(){
    //WAP to transfrom a matrix into its transpose ,if you have given a a square 2d matrix
     int arr[4][4]={ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
     cout<<"Initial matrix is : \n";
       for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       }
        for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<4;j++){
             if(i!=j&&i>j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
             }
        }
}
 for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       }
}