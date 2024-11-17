#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//you need not mention size.
    //insert/input: do not use square bracket []
 /*  v.push_back(5);
    v[1]=2;
    v[0]=65;
    v.push_back(4);
    v.push_back(7);
    //update and access k liye square bracket k use kr skte hai.
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
*/
v.push_back(1);//1 1
v.push_back(2);//2 2
v.push_back(5);//3 4
v.push_back(5);//4 4
v.push_back(7);//5 8
v.push_back(9);//6 8
v.push_back(4);//7 8
v.push_back(8);//8 8
v.push_back(12);//9 16
v.push_back(24);//10 16
v.push_back(36);//11 16
v.push_back(18);//12 16
v.push_back(9);//13 16
cout<<"Size is: "<<v.size()<<endl;//13
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//12
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//11
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//10
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//9
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//8
cout<<"Capacity is: "<<v.capacity()<<endl;//16
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;//7
cout<<"Capacity is: "<<v.capacity()<<endl;//16

}