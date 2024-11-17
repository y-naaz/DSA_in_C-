
#include<bits/stdc++.h>
#include <string>

using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    unordered_map<char,int>mp;
    string str;
    getline(cin,str);
    int n = str.size();
    //count occurrence of each character
    for(char ch:str){
        mp[ch]++;
    }
    int duplicates_product = 1 ;//concept of repeating character in string while calculating permutations
    
    for(auto pair :mp){
        duplicates_product*=factorial(pair.second);
    }
    int num_Of_Permutation=factorial(n)/ duplicates_product;
    cout<<num_Of_Permutation;


}