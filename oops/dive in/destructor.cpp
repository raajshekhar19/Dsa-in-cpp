#include<bits/stdc++.h>
using namespace std;
//getter and setter
class hero {
 public:
    int health;

       
    char level;
    char *name;

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

     ~hero(){
        cout<<endl;
        cout<<"Destructor is called ";
     }
};

int main(){


//for the statically allocated object the destuctor is 
//automatically called

//for the dynamically allocated object the destructor
//is not called call it manually

 
 hero a;

 hero *b = new hero;
  delete b;





}//on reaching here the destructor is called and the memory is de-
 //allocated





 /* hero hero1;
 hero1.sethealth(12);
 hero1.setlevel('q');
 char name[20] = "raaj";
 hero1.setname(name);
 hero1.print();

//use def copy const..

hero hero2(hero1);
hero2.print();

hero1.name[0] = 'a';
hero1.print();
hero2.print();
     */
