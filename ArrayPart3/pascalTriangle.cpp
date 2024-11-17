#include <bits/stdc++.h>
using namespace std;
int main()
{
     int numRows=5;
      vector<vector<int>> v;
        for(int i =1;i<=numRows;i++){
            vector<int>a(i,1);
            v.push_back(a);
        }
        
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <=i; j++)
            {
                if(j==0 || j==i){
                    v[i][j]=1;
                }
                else{
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
                }
            }
        }
      for(int i = 0 ;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
           cout<<v[i][j]<<" "; 
        }
        cout<<endl;
    }   
 
    }