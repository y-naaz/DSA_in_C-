#include<stdio.h>
void insertSort(int arr[],int n){
    int i ;
        for( i =1;i<n;i++){
            int j =i;
            while(j>0 && arr[j]<arr[j-1] ){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }

}
int main(){
        int arr[]={3,1,9,5,4,8};
        int n = sizeof(arr)/sizeof(arr[0]);
        insertSort(arr,n);
        for(int i =0;i<n;i++){
            printf("%d ",arr[i]);
        }
}