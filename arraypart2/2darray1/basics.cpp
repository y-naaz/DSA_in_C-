#include <bits/stdc++.h>
using namespace std;
int main(){
    /*int arr[3][3]={ 1,2,3,3,4,5,6,7,8};
    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;*/
    // }
      /*write a program to store roll number and marks obtained by 4 students side by side in a matrix*/
      /*int arr[4][2];
      cout<<"Enter roll number then marks: ";
      for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            cin>>arr[i][j];
        }
      }
        for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
         }*/
         //wAP to print the largest element of given 2-D array
       /*   int arr[4][2];
      cout<<"Enter numbers: ";
      for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            cin>>arr[i][j];
        }
      }
      int max=INT_MIN;
        for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
         }
         cout<<max;
         */
         //print sum of all elements of a 2D matrix.
         /* int arr[4][2];
      cout<<"Enter numbers: ";
      for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            cin>>arr[i][j];
        }
      }
      int sum=0;
       for(int i = 0 ;i<4;i++){
        for(int j = 0 ;j<2;j++){
            sum+=arr[i][j];
        }
      }
      cout<<sum;
      */
     //Write a program to add two matrix.
     int arr1[2][2]={1,2,3,4}, arr2[2][2]={2,3,4,5};
     int arr3[2][2];
      for(int i = 0 ;i<2;i++){
        for(int j = 0;j<2;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
      }
      for(int i = 0 ;i<2;i++){
        for(int j = 0;j<2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
      }

}