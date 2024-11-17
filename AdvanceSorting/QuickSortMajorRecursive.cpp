#include<bits/stdc++.h>
using namespace std;
int partition(int si , int ei, int arr[]){
    int pivotElement = arr[si];
    //cout<<"Pivot Element in this call is : "<<pivotElement<<endl;
    int count = 0 ;
    for(int i = si+1 ; i<=ei ; i++){
        if(arr[i]<pivotElement) count++;
    }
    int pivotIndex = si+count;
    //cout<<"Pivot Index in this call: "<<pivotIndex<<endl;
    swap(arr[pivotIndex],arr[si]);
    int i = si ;
    int j = ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int si , int arr[],int ei,int &quickSortcalls){
    if(si>=ei) return;
    quickSortcalls++;
    int pivotIndex = partition(si,ei,arr);
      // Print the left and right subarrays
       /* cout << "Left Subarray: ";
        for (int i = si; i < pivotIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Right Subarray: ";
        for (int i = pivotIndex + 1; i <= ei; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        */
    quickSort(si,arr,pivotIndex-1,quickSortcalls);
    quickSort(pivotIndex+1,arr,ei,quickSortcalls);
}
int main(){
    int n ;
    cout<<"Enter length of your array: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int quickSortcalls=0;
    quickSort(0,arr,n-1,quickSortcalls);
    cout<<"QuickSort is called: "<<quickSortcalls<<" Times";
}