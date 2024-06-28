#include<bits/stdc++.h>
using namespace std;
//getter and setter
class hero {
 public:
    int health;

       
    char level;

    //constructor with no parameter
    hero(){
        cout<<" default constructor";
    }

    //parameterised constructor
    hero (int health, char level){
         this->health = health;
         this ->level =level;
    }
    hero (int health){
         this->health = health;
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
    hero ramesh(10);
    cout<<ramesh.health;

    //creation of the object dynamically
    
    hero *mukesh = new hero(129);
    cout<<mukesh->health;

    hero *suresh = new hero(123,'f');
    cout<<suresh->health<<endl;
    cout<<suresh->level<<endl;
    suresh->print();
}