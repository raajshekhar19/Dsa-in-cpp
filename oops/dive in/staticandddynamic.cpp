#include<bits/stdc++.h>
using namespace std;
//getter and setter
class hero {
 private:
    int health;

    public:   
    char level;

    void print (){
        cout<<level<<endl;
    }

    int gethealth (){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int n){
        health = n;
    }
    void setlevel (int n){
        level = n;
    }
};

int main(){
    //creation of the object statically
    hero ramesh;

    ramesh.level ='A';
    ramesh.sethealth(10);
    
    //creation dynamically
    hero *mukesh = new hero;

    mukesh->level ='A';
    mukesh->sethealth(10);

    cout<<"mukesh health : "<<(*mukesh).gethealth()<<endl;
    cout<<"mukesh level : "<<(*mukesh).getlevel()<<endl;

    //or
    cout<<"mukesh health : "<<mukesh->gethealth()<<endl;
    cout<<"mukesh level : "<<mukesh->getlevel()<<endl;

    
}