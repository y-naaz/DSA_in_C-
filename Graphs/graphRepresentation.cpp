#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    cout<<n<<" "<<m;
    //Storing graph in adjacency matrix
    // int arr[n+1][n+1];
    // for(int i = 0 ;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     arr[u][v]=1;
    //     arr[v][u]=1;
    // }
    // //Storing graph in adjacency list 
    // vector<int>arr2[n+1];
    // for(int i = 0 ;i<m;i++){
    //     int u ,v;
    //     cin>>u>>v;
    //     arr2[u].push_back(u);
    //     arr2[v].push_back(v);
    // }
    // //Storing weight of edge in adjacency matrix
    // for(int i = 0;i<m;i++){
    //     int u,v,wt;
    //     cin>>u>>v;
    //     cin>>wt;
    //     arr[u][v]=wt;
    //     arr[v][u]=wt;
    // }
    //storing weight  of edge in adjacency list
    vector<vector<pair<int,int>>>vec(n+1);
    for(int i = 0 ;i<m;i++){
        int u,v;
        cin>>u>>v;
        int wt;
        cin>>wt;
        pair<int,int>p;
        p.first=v;
        p.second=wt;
        vec[u].push_back(p);
        //for directed graph just skip below two lines
        p.first=u;
        vec[v].push_back(p);

    }
    //print undirected graph
    for(int i = 1 ;i<=m;i++){
        for(auto j = 0 ;j<vec[i].size();j++){
            cout<<" "<<i<<"-"<<vec[i][j].first<<"(weight: "<<vec[i][j].second<<")"<<endl;
        }
        
        cout<<endl;
    }

}