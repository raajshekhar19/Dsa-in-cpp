#include<bits/stdc++.h>
using namespace std;
//getter and setter
class hero {
 private:
    int health;

    public:   
    char level;

    hero(){
        cout<<" default constructor";
    }

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


    //creation of the object dynamically
    
    hero *mukesh = new hero;

    
}