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


    //copy const
    hero(hero& temp){
        this->level =  temp.level;
        this->health = temp.health;
    }

    void print (){
        cout<<" Level is : "<<this->level<<endl;
        cout<<"Health is : "<<this->health<<endl;
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
 
 hero suresh(20,'c');
 suresh.print();

 //copy constructor called
 hero ritesh(suresh);
 ritesh.print();

 //ritesh.level =suresh.level
 //rutesh.health = suresh.level;
    
}