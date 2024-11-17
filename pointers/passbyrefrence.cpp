#include<iostream>
using namespace std;
void swap(int* p,int* q){
    /* int* c ;
    *c= *p;
    *p=*q;
     *q=*c;*/
    int c=*p;
    *p=*q;
    *q=c;
     return; 
}
int main(){
    int x,y;
    int* p=&x;
    int* q=&y;
    cout<<"Enter values: ";
    cin>>*p>>*q;
    swap(p,q);
    cout<<x<<" "<<y;

}