#include<bits/stdc++.h>
using namespace std;
int myPartition(int arr[], int si, int ei) {
    int pivotElement = arr[(si + ei) / 2];
    int count = 0;
    for (int i = si; i <= ei; i++) {
        if (i == (si + ei) / 2) continue;
        if (arr[i] < pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[pivotIdx], arr[(si + ei) / 2]);

    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] <= pivotElement) i++;
        if (arr[j] > pivotElement) j--;
        if (arr[i] > pivotElement && arr[j] < pivotElement) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int randomPivot(int arr[], int si, int ei) {
    srand(time(NULL));
    int randomIdx = si + rand() % (ei - si + 1);
    swap(arr[randomIdx], arr[(si+ei)/2]);
    return myPartition(arr, si, ei);
}



void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;
    int pi = randomPivot(arr, si, ei);
    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}

int main() {
    int arr[] = {2, 4, 1, 3, 7, 8, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
