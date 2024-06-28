#include<bits/stdc++.h>
using namespace std;

class hero {
    public:
    int health;


    char level;

    void print (){
        cout<<level<<endl;
    }
};

int main(){
    //creation of the object 
    hero ramesh;

    ramesh.level ='A';
    ramesh.health= 100;

    cout<<"Health is : "<<ramesh.health<<endl;
    //cout<<ramesh.level<<endl; error bcz the level is private
    cout<<"Level is : "<<ramesh.level<<endl;
}