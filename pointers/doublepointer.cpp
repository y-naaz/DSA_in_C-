#include<iostream>
using namespace std;
int main(){
    int a;
    int* ptr=&a;
    int** dptr=&ptr;
    int*** tptr=&dptr;
    cout<<ptr<<" "<<dptr<<" "<<tptr;
    return 0;
}