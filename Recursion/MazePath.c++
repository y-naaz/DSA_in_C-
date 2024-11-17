#include<bits/stdc++.h>
using namespace std;
//here sr is starting row, sc is starting column , er is ending row and ec is ending column.
int maze(int sr,int sc,int er ,int ec){
    // humara starting row and column change hoga lkin humara er and ec (which is our destination same rhne wala hai)
    if(sr==er&&sc==ec) return 1;//destination reached
    if(sc>ec||sr>er) return 0 ;//bahar chale gye.
    int rightWays= maze(sr,sc+1,er,ec);//right
    int downWays= maze(sr+1,sc,er,ec);//down
    return rightWays+downWays;
}

void printMazePath(int sr, int sc,int er ,int ec, string s){
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }
    if(sc>ec||sr>er) return  ;
    printMazePath(sr,sc+1,er,ec, s+'R');
    printMazePath(sr+1,sc,er,ec, s+'D');
    return;
}
/* Approach 2: 
int Maze2(int row, int col){
    if(row<1|| col<1) return 0;
    if(row==1 && col==1) return 1 ;
    int rightWays= Maze2(row,col-1);
    int downWays= Maze2(row-1,col);
    return rightWays+downWays;
}
void printMaze2(int row, int col, string s){
     if(row==1 && col==1){
        cout<<s<<endl;
    }
    if(row<1||col<1) return  ;
    printMaze2(row,col-1, s+'R');
    printMaze2(row-1,col, s+'D');
    return;
}
*/
int main(){
        cout<<maze(0,0,2,2)<<endl;
        printMazePath(0,0,2,2,"");
        // cout<<Maze2(3,3)<<endl;
        // printMaze2(3,3,"");
}