#include<iostream>
using namespace std;//write a program to print first and last digit of a number.
void num(int n,int* fptr,int* lptr ){
     *lptr=n%10;
    while(n>=10){
        n =(n)/10;
    }
      *fptr=n;  
      
    return;
}
int main(){
    int n,firstdigit,lastdigit;
    cout<<"Enter a number: ";
    cin>>n;
    int* fptr=&firstdigit;
    int* lptr=&lastdigit;
    num(n,fptr,lptr);
    cout<<firstdigit<<" "<<lastdigit;
    return 0;
}