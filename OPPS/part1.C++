#include<bits/stdc++.h>
using namespace std;
class player{
    public:
    int health;
    int score;
    char name[100][10];
};
class calculator{
     public:
    int a;
    int b ;
    void add(){
        cout<<"sum: "<<a+b<<endl;
    }
    void subtract(){
        cout<<"Difference: "<<a-b;
    }
};
int main(){
player harsh;
harsh.score=90;
cout<<harsh.score<<endl;
calculator calci;
calci.a=10;
calci.b=3;
calci.add();
calci.subtract();
}