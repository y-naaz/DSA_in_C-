#include<bits/stdc++.h>
using namespace std;
class cricketer{
    private:
    char name;
    int age;
    int test;
    float runs_in_each_testMatch;
    public:
    void setAge( int age){
        this->age=age;
    }
     void setTest( int test){
        this->test=test;
    } void setRuns( int runs_in_each_testMatch){
        this->runs_in_each_testMatch=runs_in_each_testMatch;
    } void setName( char name){
        this->name=name;
    }
    int getAge(){
        return age;
    }
    int getTest(){
        return test;
    }
    float getRuns(){
        return runs_in_each_testMatch;
    }
    char getName(){
        return name;
    }
};
int main(){
    // cricketer cricketers[20];
    // for(int i =0;i<20;i++){
    //    cin>>cricketers[i].getAge();

//     }
// }
//Sir have done the above with only 2 cricketer so program for any two cricketr
cricketer virat;
virat.setAge(30);
virat.setTest(100);
virat.setRuns(200);
virat.setName('V');
cricketer dhoni;
dhoni.setAge(40);
dhoni.setTest(120);
dhoni.setRuns(250);
dhoni.setName('D');
cricketer cricketers[]={ virat,dhoni};
cout<<cricketers[0].getName();
}