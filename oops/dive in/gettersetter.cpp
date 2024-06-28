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
    //creation of the object 
    hero ramesh;

    ramesh.level ='A';
    ramesh.sethealth(10);
    //ramesh.health= 100;
    cout<<"Ramesh health : "<<ramesh.gethealth()<<endl;

    //cout<<"Health is : "<<ramesh.health<<endl;

    cout<<"Level is : "<<ramesh.level<<endl;
}