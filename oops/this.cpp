#include<bits/stdc++.h>
using namespace std;

class hero{
    public:
int health=100;
//default constructor
hero(){
    cout<<"default contructor"<<endl;
}
int sethealth(int m){
    health =m;
}
//paramertised contructor
/* this stores the address of the current object*/
hero(int health){
    cout<<"this is "<<this;
    this->health = health;
}

};



int main(){
    //statically
    hero ramesh(10);
    cout<<&ramesh;

    //dynamically
    hero *mukesh = new hero(10);

}