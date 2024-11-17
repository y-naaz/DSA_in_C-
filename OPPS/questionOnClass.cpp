#include<bits/stdc++.h>
using namespace std;
class book{
    public:
    int price;
    int NoOfPages;
    char name;
    public:
    int countBooks(int prrice){
        if(price<prrice){
            return 1;
        }
        else return 0;
    }
    bool isBookPresent( char title){
        if(title==name){
            return true;
        }
        else return false;
    }
};
int main(){
    book harrypotter;
    harrypotter.price=100;
    harrypotter.NoOfPages=500;
    harrypotter.name='H';
   cout<<harrypotter.countBooks(50);
   cout<<harrypotter.isBookPresent('B');
}
