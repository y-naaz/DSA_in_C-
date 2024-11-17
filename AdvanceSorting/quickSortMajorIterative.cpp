#include<bits/stdc++.h>
using namespace std;
//Iterative approach
int partition(int si , int ei, int arr[]){
    int pivotElement = arr[si];
    cout<<"Pivot Element in this call is : "<<pivotElement<<endl;
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
void quickSort(int arr[], int n , int &quickSortcalls){
    stack<pair<int,int>>st;
    st.push({0,n-1});
    while(!st.empty()){
        int si = st.top().first;
        int ei = st.top().second; 
        st.pop();
        if(si>=ei) continue;
        quickSortcalls++;
        int pivotIndex = partition(si,ei,arr);
          // Print the left and right subarrays
        cout << "Left Subarray: ";
        for (int i = si; i < pivotIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Right Subarray: ";
        for (int i = pivotIndex + 1; i <= ei; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        st.push({si,pivotIndex-1});
        st.push({pivotIndex+1,ei});
    }

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
    quickSort(arr,n,quickSortcalls);
    cout<<quickSortcalls;
}