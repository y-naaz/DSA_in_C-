#include<bits/stdc++.h>
using namespace std;
class player{
    private:
    int score;
    int health;
    int age;
    bool alive;
    public:
    void setscore(int score){
        player::score=score;
    }
    void sethealth(int health){
        player::health=health;
    }
    void setage(int age){
        player::age=age;
    }
    void setISAlive(bool alive){
        this->alive=alive;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getIsAlive(){
        return alive;
    }
};
int add(player a , player b){
    return a.getscore()+b.getscore();
}
player getMaxScore(player a,player b){
    if(a.getscore()>b.getscore()){
        return a;
    }
   else  return b;
}
int main(){
    player hum;
    hum.setscore(20);
    hum.setage(24);
    hum.sethealth(100);
    hum.setISAlive(true);
    player tum;
    tum.setage(27);
    tum.setscore(100);
    tum.sethealth(70);
    tum.setISAlive(true);
    player *urvi= new player;
    player urviObject=*urvi;
    urviObject.setscore(50);
    cout<<urviObject.getscore()<<endl;
    cout<<add(hum,tum)<<endl;
    player charlie = getMaxScore(hum,tum);
    cout<<charlie.getscore()<<endl;
    cout<<charlie.gethealth();
    }