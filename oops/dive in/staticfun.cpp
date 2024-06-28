#include<bits/stdc++.h>
using namespace std;
//getter and setter
class hero {
 public:
    int health;
    char level;
    char *name;

     static int timeToComplete;

    //constructor with no parameter
    hero(){
        cout<<" default constructor";
        name = new char[100];
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
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        this->level =  temp.level;
        this->health = temp.health;
    }

    void print (){
        cout<<endl;
        cout<<"name :"<<this->name<<endl;
        cout<<"Level is : "<<this->level<<endl;
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

    void setname(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }
};

int hero::timeToComplete =5;

int main(){
 
 cout<<hero::timeToComplete;
 cout<<hero::random();

 //not recomm
 /* hero a;
 cout<<a.timeToComplete;

 hero *b = new hero;
 cout<<b->timeToComplete;
 */
    
}