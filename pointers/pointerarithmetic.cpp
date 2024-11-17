#include<iostream>
using namespace std;
int main(){
   int a=4;
    int* ptr=&a;
    cout<<*ptr<<endl;
    // ptr=ptr+1;
   /*ptr++;
    cout<<*ptr;*/
//if we will do as below increment in variable will happen
//*ptr=*ptr+1;
(*ptr)++;//if you will do *ptr++ the code will agin run wrong so it advisabel to put *ptr in bracket
cout<<*ptr<<endl;
*ptr+=7;
cout<<*ptr<<endl;
    return 0;
}