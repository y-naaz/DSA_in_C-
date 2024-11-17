#include<bits/stdc++.h>
using namespace std;
class bike{
    public:
    static int NoOfBikes;
    int tyreSize;
    int engineSize;
    bike( int tyreSize, int engineSize){
        cout<<"Constructor call hua"<<endl;
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
   ~bike(){
    cout<<"Destructor call hua"<<endl;
   }
};
 int bike::NoOfBikes=10;
int main(){
    bike tvs(12,100);//object creation means constructor ko call jayegi.
    // bike honda(13,200);//constructor ko call jayegi.
    bool flag=true;
    if(flag==true){
        bike bmw(260,1000);
    }
    // bike royalenfield(15,350);//constructor ko call jayegi.
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<tvs.NoOfBikes<<endl;
    
}
